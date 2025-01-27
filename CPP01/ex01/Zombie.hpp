#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <cstdlib>

#pragma once

class Zombie
{
public:
    Zombie();
    ~Zombie();
    void announce(void)const;
	void setName(std::string name);
    Zombie *zombieHorde(int N, std::string name);
private:
    std::string	_name;
};

Zombie *zombieHorde(int N, std::string name);
#endif