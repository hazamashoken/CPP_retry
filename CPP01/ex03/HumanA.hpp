#pragma once

#include <iostream>
#include "Weapon.hpp"

class HumanA {
  private:
    std::string __name;
    const Weapon& __weapon;

  public:
    HumanA(const std::string& name, const Weapon& weapon);
    ~HumanA();

    void attack();
};