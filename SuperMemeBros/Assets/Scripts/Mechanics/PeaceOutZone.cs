using Platformer.Gameplay;
using UnityEngine;
using static Platformer.Core.Simulation;

namespace Platformer.Mechanics
{
    /// <summary>
    /// Marks a trigger as a PeaceOutZone
    /// </summary>
    public class PeaceOutZone : MonoBehaviour
    {

        public bool beenFound = false;

        public Material invis;

        void OnTriggerEnter2D(Collider2D collider)
        {
            var p = collider.gameObject.GetComponent<PlayerController>();
    
            if (p != null)
            {
                var ev = Schedule<PlayerEnteredPeaceOutZone>();

                var renderer = GameObject.Find("Player").GetComponent<SpriteRenderer>();
                renderer.material = invis;//SpatialMappingOcclusion;

                if(!beenFound) {
                    var slider = GameObject.Find("Progress Bar").GetComponent<ProgressBar>();
                    slider.IncrementProgress();
                }

                beenFound = true;

                ev.peaceoutzone = this;
            }
        }
    }
}
