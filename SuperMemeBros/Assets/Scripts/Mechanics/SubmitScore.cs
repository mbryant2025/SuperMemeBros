using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SubmitScore : MonoBehaviour
{
    public GameObject WinText;
    public GameObject EnterNameText;
    public GameObject SubmitButton;
    public GameObject NoThanksButton;
    public GameObject InputField;
    public GameObject FinalTextTime;

    public GameObject SubmitButtonText;
    public GameObject CancelButtonText;
    public GameObject InputFieldPlaceholder;
    public GameObject InputFieldInputText;

    public GameObject ThanksForPlaying;

    public Text NameText;

    public void Submit() {

        float t = GameObject.Find("Player").GetComponent<Timer>().getTime();
        string name = NameText.text;

        WinText.SetActive(false);
        EnterNameText.SetActive(false);
        SubmitButton.SetActive(false);
        NoThanksButton.SetActive(false);
        InputField.SetActive(false);
        FinalTextTime.SetActive(false);

        SubmitButtonText.SetActive(false);
        CancelButtonText.SetActive(false);
        InputFieldPlaceholder.SetActive(false);
        InputFieldInputText.SetActive(false);

        ThanksForPlaying.SetActive(true);

        System.Diagnostics.Process process = new System.Diagnostics.Process();
        System.Diagnostics.ProcessStartInfo startInfo = new System.Diagnostics.ProcessStartInfo();
        startInfo.WindowStyle = System.Diagnostics.ProcessWindowStyle.Hidden;
        startInfo.FileName = "cmd.exe";
        startInfo.Arguments = Application.dataPath + "python3 -c 'import pushData; pushData.uploadScores(" + t + ", " + name + ")'";
        process.StartInfo = startInfo;
        process.Start();

    }
}
