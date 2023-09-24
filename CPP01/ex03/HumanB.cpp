#include "HumanB.hpp"

HumanB::HumanB(const std::string& name): __name(name), __weapon(0) {
}

HumanB::~HumanB(){
}

void HumanB::attack(){
  if (!__weapon) {
    std::cout << __name << " attacks with their hopes and dreams which does not exist." << std::endl;
    return;
  }
  std::cout << __name << " attacks with their " << __weapon->getType() << std::endl;
}

void HumanB::setWeapon(const Weapon& weapon){
  __weapon = &weapon;
}

