using UnityEngine;
using System.Collections;

public class TriggerAnimation : MonoBehaviour {
    public string AnimationName;
    public Animator stateMachine;

    void Awake() {
        if (GvrViewer.Instance == null) {
            GvrViewer.Create();
        }
    }

    void Start() {
            foreach (Camera c in GvrViewer.Instance.GetComponentsInChildren<Camera>()) {
                c.enabled = true; // to use the Gvr SDK without adding cameras we have to disable them
            }

    }

    void Update() {
        GvrViewer.Instance.UpdateState(); //need to update the data here otherwise we dont get mouse clicks; this is because we are automatically creating the GVRSDK (seems like a bug)
        if (GvrViewer.Instance.Triggered)
            stateMachine.SetTrigger(AnimationName);
    }

}