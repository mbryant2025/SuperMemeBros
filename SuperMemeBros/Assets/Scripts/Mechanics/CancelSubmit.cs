using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CancelSubmit : MonoBehaviour
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

    public void Cancel() {

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
    }
}
