using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollisionDetector : MonoBehaviour
{
    public TextMesh message;
    public int time = 0;
    
    // Start is called before the first frame update
    void Start()
    {
        // None
    }


    // Update is called once per frame
    void Update()
    {
        if (time++ > 360)
        {
            message.text = ""; 
            time = 0;
        }
    }

    void OnCollisionEnter(Collision collision)
    {
        time = 0;
        Debug.Log(collision.collider.tag);
        message.text = "Collided with " + collision.collider.tag;
    }
}
