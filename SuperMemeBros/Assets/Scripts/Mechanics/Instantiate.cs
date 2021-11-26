using UnityEngine;

namespace Platformer.Mechanics
{
    public class Instantiate : MonoBehaviour
    {
        public GameObject player;

        public void TheresAnother() {
            Instantiate(player, new Vector3(0, 0, 0), Quaternion.identity);
        }
    }
}