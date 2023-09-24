#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, const Weapon& weapon): __name(name), __weapon(weapon){
}

HumanA::~HumanA(){
}

void HumanA::attack(){
  std::cout << __name << " attacks with their " << __weapon.getType() << std::endl;
}


