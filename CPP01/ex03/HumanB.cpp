#include "HumanB.hpp"

//constructor
HumanB::HumanB(const std::string& name) : _name(name), _weapon(NULL) {}

//destructor
HumanB::~HumanB() {}

//methodes
void HumanB::attack() const {
  if (_weapon) {
    std::cout << _name << "attaque with their " << _weapon->getType() << std::endl; 
  }
  else {
    std:: cout << _name << "has no weapon" << std::endl; 
  }
}

void HumanB::setWeapon(Weapon& weapon) {
    _weapon = &weapon;
}