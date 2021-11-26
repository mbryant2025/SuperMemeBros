using Platformer.Core;
using Platformer.Mechanics;
using Platformer.Model;

namespace Platformer.Gameplay
{

    /// <summary>
    /// This event is triggered when the player character enters a trigger with a IAmSpeedZone component.
    /// </summary>
    /// <typeparam name="PlayerEnteredIAmSpeedZone"></typeparam>
    public class PlayerEnteredIAmSpeedZone : Simulation.Event<PlayerEnteredIAmSpeedZone>
    {
        public IAmSpeedZone iamspeedzone;

        PlatformerModel model = Simulation.GetModel<PlatformerModel>();

        public override void Execute()
        {
        }
    }
}
