using Platformer.Gameplay;
using UnityEngine;
using static Platformer.Core.Simulation;

namespace Platformer.Mechanics
{
    /// <summary>
    /// Marks a trigger as an UnoReverseZone
    /// </summary>
    public class UnoReverseZone : MonoBehaviour
    {

        public bool beenFound = false;

        void OnTriggerEnter2D(Collider2D collider)
        {
            var p = collider.gameObject.GetComponent<PlayerController>();
    
            if (p != null)
            {
                var ev = Schedule<PlayerEnteredUnoReverseZone>();

                var player = GameObject.Find("Player").GetComponent<PlayerController>();
                player.UnoReverse();

                if(!beenFound) {
                    var slider = GameObject.Find("Progress Bar").GetComponent<ProgressBar>();
                    slider.IncrementProgress();
                }

                beenFound = true;

                ev.unoreversezone = this;
            }
        }
    }
}
