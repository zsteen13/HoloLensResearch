using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.Input;


public class GazeDetector : MonoBehaviour, IMixedRealityFocusHandler
{
    void IMixedRealityFocusHandler.OnFocusEnter(FocusEventData eventData)
    {
        Debug.Log(eventData);
    }

    void IMixedRealityFocusHandler.OnFocusExit(FocusEventData eventData)
    {
        Debug.Log("Bye");
    }

    // Start is called before the first frame update
    void Start()
    {
        // none
    }

    // Update is called once per frame
    void Update()
    {
        // none
    }
}
