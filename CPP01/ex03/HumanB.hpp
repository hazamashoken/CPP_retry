#pragma once

#include <iostream>
#include "Weapon.hpp"

class HumanB {
  private:
    std::string __name;
    const Weapon* __weapon;

  public:
    HumanB(const std::string& name);
    ~HumanB();

    void attack();
    void setWeapon(const Weapon& weapon);
};