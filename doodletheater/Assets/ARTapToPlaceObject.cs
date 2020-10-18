using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using TMPro;

[RequireComponent(typeof(ARRaycastManager))]
public class ARTapToPlaceObject : MonoBehaviour
{
    [SerializeField]
    private GameObject char1;
    [SerializeField]
    private GameObject char2;

    private GameObject spawnedObject;
    private GameObject spawnedObject2;
    private ARRaycastManager _arRaycastManager;
    private Vector2 touchPosition;

    private bool charselected = false;

    private int count = 0;

    static List<ARRaycastHit> hits = new List<ARRaycastHit>();

    private void Awake()
    {
        _arRaycastManager = GetComponent<ARRaycastManager>();
    }

    bool TryGetTouchPosition(out Vector2 touchPosition)
    {
        if (Input.touchCount > 0)
        {
            touchPosition = Input.GetTouch(0).position;
            return true;
        }
        touchPosition = default;
        return false;
    }

    // Update is called once per frame
    void Update()
    {
        //if (!TryGetComponent(out Vector2 touchPosition))
        //{
        //    return;
        //}
        if (Input.touchCount == 1)
        {
            if (Input.GetTouch(0).phase == TouchPhase.Began)
            {


                if (_arRaycastManager.Raycast(Input.GetTouch(0).position, hits, TrackableType.PlaneWithinPolygon))
                {
                    var hitPose = hits[0].pose;

                    if (spawnedObject == null)
                    {
                        charselected = true;
                        spawnedObject = Instantiate(char1, hitPose.position, hitPose.rotation);
                        charselected = false;
                    }
                    else if (spawnedObject2 == null && !charselected)
                    {
                        charselected = true;
                        spawnedObject2 = Instantiate(char2, hitPose.position, hitPose.rotation);
                        charselected = false;
                    }
                    else
                    {
                        if (count % 2 == 0 && !charselected)
                        {
                            charselected = true;
                            spawnedObject.transform.position = hitPose.position;
                            spawnedObject.transform.rotation = hitPose.rotation;
                            count++;
                            charselected = false;
                        }
                        else if (count % 2 == 1 && !charselected)
                        {
                            charselected = true;
                            spawnedObject2.transform.position = hitPose.position;
                            spawnedObject2.transform.rotation = hitPose.rotation;
                            count++;
                            charselected = false;
                        }
                    }
                }
            }
        }
       
    }
}
