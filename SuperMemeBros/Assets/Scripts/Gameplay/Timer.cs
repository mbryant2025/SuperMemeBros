using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Timer : MonoBehaviour
{

    public Text timerText;
    private float startTime;
    private float time;
    private bool stopped = false;

    // Start is called before the first frame update
    void Start()
    {
        startTime = Time.time;
    }

    // Update is called once per frame
    void Update()
    {
        float t = Time.time - startTime;

        time = (int)t;

        string minutes = ((int) t /60).ToString();
        string seconds = ((int) t % 60).ToString();

        if(!stopped) {
            if(t % 60 < 10) {
                timerText.text = minutes + ":0" + seconds;
            }
            else {
                timerText.text = minutes + ":" + seconds;
            }
        }
    }

    public void stop() {
        stopped = true;
    }

    public float getTime() {
        return time;
    }
}
