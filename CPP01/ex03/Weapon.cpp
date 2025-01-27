#include "Weapon.hpp"

//constructor
Weapon::Weapon(const std::string& type) : _type(type) {}

//destructor
Weapon::~Weapon(){}

const std::string& Weapon::getType() const {
    return (_type);
}

void Weapon::setType(const std::string& type) {
    _type = type;
}