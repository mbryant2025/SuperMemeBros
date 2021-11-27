using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ProgressBar : MonoBehaviour
{
    private Slider slider;

    public float FillSpeed = 0.5f;
    private float targetProgress = 0;

    const int memesToBeFound = 4;
    
    private void Awake() {
        slider = gameObject.GetComponent<Slider>();
        var fill = GameObject.Find("Fill").GetComponent<Image>();
        fill.color = new Color(0.345098f, 0.4627451f, 0.5882353f, 1.0f);
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

        if(slider.value >= 0.98) {
            var fill = GameObject.Find("Fill").GetComponent<Image>();
            fill.color = Color.green;
        }        
    }

    public void IncrementProgress() {
        targetProgress = slider.value + 1.0f/memesToBeFound;
    }

    public bool hasFoundAllMemes() {
        return slider.value >= 0.98f;
    }

    IEnumerator waiter()
    {
        var fill = GameObject.Find("Fill").GetComponent<Image>();
        fill.color = Color.red;
        yield return new WaitForSeconds(4);
        fill.color = new Color(0.345098f, 0.4627451f, 0.5882353f, 1.0f);
    }

    public void warn() {
        StartCoroutine(waiter());
    }
}
