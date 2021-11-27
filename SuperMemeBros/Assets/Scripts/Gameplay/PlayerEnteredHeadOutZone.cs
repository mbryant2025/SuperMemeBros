using Platformer.Core;
using Platformer.Mechanics;
using Platformer.Model;

namespace Platformer.Gameplay
{

    /// <summary>
    /// This event is triggered when the player character enters a trigger with a HeadOutZone component.
    /// </summary>
    /// <typeparam name="PlayerEnteredHeadOutZone"></typeparam>
    public class PlayerEnteredHeadOutZone : Simulation.Event<PlayerEnteredHeadOutZone>
    {
        public HeadOutZone headoutzone;

        PlatformerModel model = Simulation.GetModel<PlatformerModel>();

        public override void Execute()
        {
        }
    }
}
