#include "Zombie.hpp"

Zombie::Zombie(const std::string& name): name(name){
  std::cout << name << " constructed" << std::endl;
}

Zombie::Zombie( void ){
  std::cout << "no name constructed" << std::endl;
}

Zombie::~Zombie() {
  std::cout << name << " deconstructed" << std::endl;
}

void Zombie::announce() {
  std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(const std::string& name) {
  this->name = name;
}