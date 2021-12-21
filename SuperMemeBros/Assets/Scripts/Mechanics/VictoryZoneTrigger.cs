using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class VictoryZoneTrigger : MonoBehaviour
{
    public GameObject RickRollBackground;
    public GameObject WinText;
    public GameObject EnterNameText;
    public GameObject SubmitButton;
    public GameObject NoThanksButton;
    public GameObject InputField;
    public GameObject FinalTextTime;
    public GameObject Timer;

    public Text FinalTimeText;

    public GameObject SubmitButtonText;
    public GameObject CancelButtonText;
    public GameObject InputFieldPlaceholder;
    public GameObject InputFieldInputText;

    public void loadWinScreen() {
        RickRollBackground.SetActive(true);
        WinText.SetActive(true);
        EnterNameText.SetActive(true);
        SubmitButton.SetActive(true);
        NoThanksButton.SetActive(true);
        InputField.SetActive(true);
        FinalTextTime.SetActive(true);

        SubmitButtonText.SetActive(true);
        CancelButtonText.SetActive(true);
        InputFieldPlaceholder.SetActive(true);
        InputFieldInputText.SetActive(true);

        float t = GameObject.Find("Player").GetComponent<Timer>().getTime();
        
        string time;

        string minutes = ((int) t /60).ToString();
        string seconds = ((int) t % 60).ToString();

            if(t % 60 < 10) {
                time = minutes + ":0" + seconds;
            }
            else {
                time = minutes + ":" + seconds;
            }

        FinalTimeText.text = time;

        Timer.SetActive(false);
    }
}