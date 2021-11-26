using Platformer.Gameplay;
using UnityEngine;
using static Platformer.Core.Simulation;

namespace Platformer.Mechanics
{
    /// <summary>
    /// Marks a trigger as a TheresAnotherZone
    /// </summary>
    public class TheresAnotherZone : MonoBehaviour
    {

        public bool beenFound = false;

        public GameObject playerPrefab;

        void OnTriggerEnter2D(Collider2D collider)
        {
            var p = collider.gameObject.GetComponent<PlayerController>();
    
            if (p != null)
            {
                var ev = Schedule<PlayerEnteredTheresAnotherZone>();

                Instantiate(playerPrefab);

                if(!beenFound) {
                    var slider = GameObject.Find("Progress Bar").GetComponent<ProgressBar>();
                    slider.IncrementProgress();
                }

                beenFound = true;

                ev.theresanotherzone = this;
            }
        }
    }
}
