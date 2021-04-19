using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CarEngine : MonoBehaviour
{

    Grid grid;

    void Awake()
    {
        grid = GameObject.Find("A*").GetComponent<Grid>();
    }

    void Update()
    {
        nodes = grid.path;
    }

    public float maxSteerAngle = 50f;
    public float turnSpeed = 5f;
    public WheelCollider wheelFL;
    public WheelCollider wheelFR;
    public WheelCollider wheelRL;
    public WheelCollider wheelRR;
    public float maxMotorTorque = 80f;
    public float maxBrakeTorque = 300f;
    public float currentSpeed;
    public float maxSpeed = 80f;
    public bool isBraking = false;

    [Header("Sensors")]
    public float sensorLength = 2.5f;
    public Vector3 frontSensorPosition = new Vector3(0f, 0.2f, 0.6f);
    public float frontSideSensorPosition = 0.6f;
    public float frontSensorAngle = 15f;

    private List<Node> nodes;
    private int currentNode = 0;
    private bool avoiding = false;
    private float targetSteerAngle = 0;

    private void FixedUpdate()
    {
        Sensors();
        ApplySteer();
        Drive();
        CheckWaypointDistance();
        Braking();
        LerpToSteerAngle();
    }

    private void Sensors()
    {
        RaycastHit hit;
        Vector3 sensorStartPos = transform.position;
        sensorStartPos += transform.forward * frontSensorPosition.z;
        sensorStartPos += transform.up * frontSensorPosition.y;
        float avoidMultiplier = 0;
        avoiding = false;

        // front left sensors
        sensorStartPos += transform.right * frontSideSensorPosition;
        if (Physics.Raycast(sensorStartPos, transform.forward, out hit, sensorLength))
        {
            Debug.DrawLine(sensorStartPos, hit.point);
            Debug.Log("Front Left Sensor Tripped");
            avoiding = true;
            avoidMultiplier -= 1f;
        }
        // left angle sensor
        else if (Physics.Raycast(sensorStartPos, Quaternion.AngleAxis(frontSensorAngle, transform.up) * transform.forward, out hit, sensorLength))
        {
            Debug.DrawLine(sensorStartPos, hit.point);
            Debug.Log("Front Left Angle Sensor Tripped");
            avoiding = true;
            avoidMultiplier -= 0.5f;
        }

        // front Right sensors
        sensorStartPos -= 2 * transform.right * frontSideSensorPosition;
        if (Physics.Raycast(sensorStartPos, transform.forward, out hit, sensorLength))
        {
            Debug.DrawLine(sensorStartPos, hit.point);
            Debug.Log("Front Right Sensor Tripped");
            avoiding = true;
            avoidMultiplier += 1f;
        }
        // right angle sensor
        else if (Physics.Raycast(sensorStartPos, Quaternion.AngleAxis(-frontSensorAngle, transform.up) * transform.forward, out hit, sensorLength))
        {
            Debug.DrawLine(sensorStartPos, hit.point);
            Debug.Log("Front Right Angle Sensor Tripped");
            avoiding = true;
            avoidMultiplier += 0.5f;
        }

        // front sensors
        if (avoidMultiplier == 0)
        {
            if (Physics.Raycast(sensorStartPos, transform.forward, out hit, sensorLength))
            {
                Debug.DrawLine(sensorStartPos, hit.point);
                Debug.Log("Front Sensor Tripped");
                avoiding = true;
                if (hit.normal.x < 0)
                {
                    avoidMultiplier = -1;
                }
                else
                {
                    avoidMultiplier = 1;
                }
            }
        }

        // avoid obstacles
        if (avoiding)
        {
            targetSteerAngle = maxSteerAngle * avoidMultiplier;
        }
    }

    private void ApplySteer()
    {
        // no steer if avoiding or braking
        if (avoiding || isBraking)
        {
            return;
        }
        Vector3 relativeVector = transform.InverseTransformPoint(nodes[currentNode].worldPosition);
        float newSteer = (relativeVector.x / relativeVector.magnitude) * maxSteerAngle;
        targetSteerAngle = newSteer;
    }

    private void Drive()
    {
        currentSpeed = 2 * Mathf.PI * wheelFL.radius * wheelFL.rpm * 60 / 1000;

        if (currentSpeed < maxSpeed && currentNode != nodes.Count - 1 && !isBraking)
        {
            wheelFL.motorTorque = maxMotorTorque;
            wheelFR.motorTorque = maxMotorTorque;
        }
        else
        {
            wheelFL.motorTorque = 0;
            wheelFR.motorTorque = 0;
        }
    }

    private void CheckWaypointDistance()
    {
        nodes.TrimExcess();
        if (currentNode < 0 || currentNode >= nodes.Count - 1)
        {
            isBraking = true;
        }
        if (nodes.Count >= 5)
        {
            isBraking = false;
        }
        if (Vector3.Distance(transform.position, nodes[currentNode].worldPosition) < 1.0f)
        {
            if (currentNode >= nodes.Count - 1)
            {
                //currentNode = 0;
                isBraking = true;
            }
            else
            {
                currentNode++;
            }
        } 
    }

    private void Braking()
    {
        if (isBraking)
        {
            wheelRL.brakeTorque = maxBrakeTorque;
            wheelRR.brakeTorque = maxBrakeTorque;
        }
        else
        {
            wheelRL.brakeTorque = 0;
            wheelRR.brakeTorque = 0;
        }
    }

    private void LerpToSteerAngle()
    {
        wheelFL.steerAngle = Mathf.Lerp(wheelFL.steerAngle, targetSteerAngle, Time.deltaTime * turnSpeed);
        wheelFR.steerAngle = Mathf.Lerp(wheelFR.steerAngle, targetSteerAngle, Time.deltaTime * turnSpeed);
    }
}
