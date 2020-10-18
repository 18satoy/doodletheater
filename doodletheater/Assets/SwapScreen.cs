using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SwapScreen : MonoBehaviour
{
    [SerializeField]
    private GameObject startScreen;
    [SerializeField]
    private GameObject nextScreen;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void Swap()
    {
        startScreen.SetActive(false);
        nextScreen.SetActive(true);
    }

    public void TransitionScene()
    {
        SceneManager.LoadScene("AR-ify");
    }

    public void ReturnHome()
    {
        SceneManager.LoadScene("HomeScreen");
    }

}
