using Platformer.Core;
using Platformer.Mechanics;
using Platformer.Model;

namespace Platformer.Gameplay
{

    /// <summary>
    /// This event is triggered when the player character enters a trigger with a MLGZone component.
    /// </summary>
    /// <typeparam name="PlayerEnteredMLGZone"></typeparam>
    public class PlayerEnteredMLGZone : Simulation.Event<PlayerEnteredMLGZone>
    {
        public MLGZone mlgzone;

        PlatformerModel model = Simulation.GetModel<PlatformerModel>();

        public override void Execute()
        {
        }
    }
}