using Platformer.Gameplay;
using UnityEngine;
using static Platformer.Core.Simulation;

namespace Platformer.Mechanics
{
    /// <summary>
    /// Marks a trigger as a HeadOutZone
    /// </summary>
    public class HeadOutZone : MonoBehaviour
    {

        public bool beenFound = false;

        void OnTriggerEnter2D(Collider2D collider)
        {
            var p = collider.gameObject.GetComponent<PlayerController>();
    
            if (p != null)
            {
                var ev = Schedule<PlayerEnteredHeadOutZone>();

                var player = GameObject.Find("Player").GetComponent<PlayerController>();
                player.HeadOut();

                if(!beenFound) {
                    var slider = GameObject.Find("Progress Bar").GetComponent<ProgressBar>();
                    slider.IncrementProgress();
                }

                beenFound = true;

                ev.headoutzone = this;
            }
        }
    }
}
