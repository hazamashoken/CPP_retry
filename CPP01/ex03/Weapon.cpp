#include "Weapon.hpp"

Weapon::Weapon() {
}

Weapon::Weapon(const std::string& type): __type(type) {
}

Weapon::~Weapon(){
}

const std::string& Weapon::getType() const {
  return __type;
}

void Weapon::setType(const std::string& type) {
  __type = type;
}