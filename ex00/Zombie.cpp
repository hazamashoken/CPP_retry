#include "Zombie.hpp"

Zombie::Zombie(const std::string& name): name(name){
  std::cout << name << " constructed" << std::endl;
}

Zombie::~Zombie() {
  std::cout << name << " deconstructed" << std::endl;
}

void Zombie::announce() {
  std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}