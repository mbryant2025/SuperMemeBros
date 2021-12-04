using Platformer.Core;
using Platformer.Mechanics;
using Platformer.Model;

namespace Platformer.Gameplay
{

    /// <summary>
    /// This event is triggered when the player character enters a trigger with a PeaceOutZone component.
    /// </summary>
    /// <typeparam name="PlayerEnteredPeaceOutZone"></typeparam>
    public class PlayerEnteredPeaceOutZone : Simulation.Event<PlayerEnteredPeaceOutZone>
    {
        public PeaceOutZone peaceoutzone;

        PlatformerModel model = Simulation.GetModel<PlatformerModel>();

        public override void Execute()
        {
        }
    }
}
