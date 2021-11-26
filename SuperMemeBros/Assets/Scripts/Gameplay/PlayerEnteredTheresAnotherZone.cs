using Platformer.Core;
using Platformer.Mechanics;
using Platformer.Model;

namespace Platformer.Gameplay
{

    /// <summary>
    /// This event is triggered when the player character enters a trigger with a TheresAnotherZone component.
    /// </summary>
    /// <typeparam name="PlayerEnteredTheresAnotherZone"></typeparam>
    public class PlayerEnteredTheresAnotherZone : Simulation.Event<PlayerEnteredTheresAnotherZone>
    {
        public TheresAnotherZone theresanotherzone;

        PlatformerModel model = Simulation.GetModel<PlatformerModel>();

        public override void Execute()
        {
        }
    }
}
