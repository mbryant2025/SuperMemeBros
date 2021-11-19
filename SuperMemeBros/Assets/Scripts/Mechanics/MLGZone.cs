using Platformer.Gameplay;
using UnityEngine;
using static Platformer.Core.Simulation;

namespace Platformer.Mechanics
{
    /// <summary>
    /// Marks a trigger as a MLGZone
    /// </summary>
    public class MLGZone : MonoBehaviour
    {

        public bool beenFound = false;

        void OnTriggerEnter2D(Collider2D collider)
        {
            var p = collider.gameObject.GetComponent<PlayerController>();
    
            if (p != null)
            {
                var ev = Schedule<PlayerEnteredMLGZone>();

                //Play MLG audio
                gameObject.GetComponent<AudioSource>().Play();

                if(!beenFound) {
                    var slider = GameObject.Find("Progress Bar").GetComponent<ProgressBar>();
                    slider.IncrementProgress();
                }

                beenFound = true;

                ev.mlgzone = this;
            }
        }
    }
}