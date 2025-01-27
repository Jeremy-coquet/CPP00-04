#include "HumanA.hpp"
#include <iostream>

//constructor
HumanA::HumanA(const std::string& name, Weapon& weapon) : _name(name), _weapon(weapon) {}

//destructor
HumanA::~HumanA() {};

//methode
void HumanA::attack() const {
    std::cout << _name << "attacks with their " << _weapon.getType() << std::endl; 
}
