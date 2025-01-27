#ifndef HUMANB_HPP
#define HUMANB_HPP

#pragma once

#include <iostream>
#include "Weapon.hpp"
#include <string>

class HumanB
{
public:
    HumanB(const std::string& name);
    // HumanB(const std::string& _name, Weapon& weapon);
    ~HumanB();
    void attack() const;
    void setWeapon(Weapon& weapon);

private:
    std::string _name;
    Weapon* _weapon; //avec pointeur qui peut etre NULL;
    //TODO voir pour constructeur de surcharge.
};

#endif