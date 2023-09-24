#include "Zombie.hpp"

int main(void){

  {
    Zombie zombie("scoped zombie");

    zombie.announce();
  }
  {
    Zombie* zombie = newZombie("new zombie");
    zombie->announce();

    delete zombie;
  }
  {
    randomChump("random chump");
  }

  return 0;
}
