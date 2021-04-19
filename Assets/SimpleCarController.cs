using UnityEngine;
using System.Collections;
using System.Collections.Generic;

[System.Serializable]
public class AxleInfo
{
    public WheelCollider leftWheel;
    public WheelCollider rightWheel;
    public bool motor;
    public bool steering;
}

public class SimpleCarController : MonoBehaviour
{
    public List<AxleInfo> axleInfos;
    public float maxMotorTorque;
    public float maxSteeringAngle;

    IEnumerator Wait(int x)
    {
        yield return new WaitForSeconds(x);
    }

    // finds the corresponding visual wheel
    // correctly applies the transform
    public void ApplyLocalPositionToVisuals(WheelCollider collider)
    {
        if (collider.transform.childCount == 0)
        {
            return;
        }

        Transform visualWheel = collider.transform.GetChild(0);

        Vector3 position;
        Quaternion rotation;
        collider.GetWorldPose(out position, out rotation);

        visualWheel.transform.position = position;
        visualWheel.transform.rotation = rotation;
    }


    // 1 is forward, 0 is backwards
    public void Drive1Meter(bool fordward, WheelCollider collider)
    {
        int direction = fordward ? -1 : 1;
        if (collider.transform.childCount == 0)
        {
            return;
        }

        Transform visualWheel = collider.transform.GetChild(0);

        Vector3 position;
        Quaternion rotation;
        
        collider.GetWorldPose(out position, out rotation);
        Vector3 init_posit = position;

        //while (position <= init_posit + direction)
        while (true)
        {
            float motor = maxMotorTorque * direction / 3;
            collider.GetWorldPose(out position, out rotation);
        }
    }

    // 1 is right, 0 is left
    public void Turn45Degrees(bool right, WheelCollider collider)
    {
        int direction = right ? -1 : 1;
        if (collider.transform.childCount == 0)
        {
            return;
        }

        Transform visualWheel = collider.transform.GetChild(0);

        Vector3 position;
        Quaternion rotation;
        collider.GetWorldPose(out position, out rotation);
        Quaternion init_rotat = rotation;

        //while (rotation <= init_rotat + direction * 45)
        while (true)
        {
            float steering = maxSteeringAngle * direction * 45 ;
            float motor = -1 / 3 * maxMotorTorque;
            collider.GetWorldPose(out position, out rotation);
        }
    }


    public void FixedUpdate()
    {
        // for keyboard input
        //float motor = maxMotorTorque * Input.GetAxis("Vertical");
        //float steering = maxSteeringAngle * Input.GetAxis("Horizontal");

        // for algorithmic input

        float motor = 0;
        float steering = 0;

        if (Input.GetButtonDown("Fire1")) //cntrl
        {
            motor = maxMotorTorque * -1 / 3;
            steering = maxSteeringAngle * 0;
        }
        else
        {
            motor = 0;
            steering = 0;
        }

        //float motor = maxMotorTorque * -1 / 3;
        //float steering = maxSteeringAngle * 0;

        foreach (AxleInfo axleInfo in axleInfos)
        {
            if (axleInfo.steering)
            {
                axleInfo.leftWheel.steerAngle = steering;
                axleInfo.rightWheel.steerAngle = steering;
            }
            if (axleInfo.motor)
            {
                axleInfo.leftWheel.motorTorque = motor;
                axleInfo.rightWheel.motorTorque = motor;
            }
            ApplyLocalPositionToVisuals(axleInfo.leftWheel);
            ApplyLocalPositionToVisuals(axleInfo.rightWheel);
        }

        StartCoroutine(Wait(2));
    }
}