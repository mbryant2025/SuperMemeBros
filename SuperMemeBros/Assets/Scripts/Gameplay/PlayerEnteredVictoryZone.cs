using Platformer.Core;
using Platformer.Mechanics;
using Platformer.Model;
using UnityEngine;

namespace Platformer.Gameplay
{

    /// <summary>
    /// This event is triggered when the player character enters a trigger with a VictoryZone component.
    /// </summary>
    /// <typeparam name="PlayerEnteredVictoryZone"></typeparam>
    public class PlayerEnteredVictoryZone : Simulation.Event<PlayerEnteredVictoryZone>
    {
        public VictoryZone victoryZone;

        PlatformerModel model = Simulation.GetModel<PlatformerModel>();

        public override void Execute()
        {
            var slider = GameObject.Find("Progress Bar").GetComponent<ProgressBar>();

            if(slider.hasFoundAllMemes()) {
                model.player.animator.SetTrigger("victory");
                //gameObject.GetComponent<AudioSource>().Play();
                model.player.controlEnabled = false;
            } 
            else {
                slider.warn();
            }

        }
    }
}