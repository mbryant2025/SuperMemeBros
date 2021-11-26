using Platformer.Core;
using Platformer.Mechanics;
using Platformer.Model;

namespace Platformer.Gameplay
{

    /// <summary>
    /// This event is triggered when the player character enters a trigger with an UnoReverseZone component.
    /// </summary>
    /// <typeparam name="PlayerEnteredUnoReverseZone"></typeparam>
    public class PlayerEnteredUnoReverseZone : Simulation.Event<PlayerEnteredUnoReverseZone>
    {
        public UnoReverseZone unoreversezone;

        PlatformerModel model = Simulation.GetModel<PlatformerModel>();

        public override void Execute()
        {
        }
    }
}
