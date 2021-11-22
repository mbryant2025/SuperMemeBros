using Platformer.Gameplay;
using UnityEngine;
using static Platformer.Core.Simulation;

namespace Platformer.Mechanics
{
    /// <summary>
    /// Marks a trigger as a UnoReverseZone
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

                if(!beenFound) {
                    var slider = GameObject.Find("Progress Bar").GetComponent<ProgressBar>();
                    slider.IncrementProgress();
                }

                //var player = GameObject.Find("Player");
                //player.UnoReverse();

                beenFound = true;

                ev.unoreversezone = this;
            }
        }
    }
}
