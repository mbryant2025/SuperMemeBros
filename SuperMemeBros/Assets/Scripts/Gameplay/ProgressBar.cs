using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ProgressBar : MonoBehaviour
{
    private Slider slider;

    public float FillSpeed = 0.5f;
    private float targetProgress = 0;

    const int memesToBeFound = 2;
    
    private void Awake() {
        slider = gameObject.GetComponent<Slider>();
        slider.value = 0;
    }

    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        if(slider.value < targetProgress) {
            slider.value += FillSpeed * Time.deltaTime;
        }
        
    }

    public void IncrementProgress() {
        targetProgress = slider.value + 1/memesToBeFound;
    }

    public bool hasFoundAllMemes() {
        return slider.value >= 0.98f;
    }
}
