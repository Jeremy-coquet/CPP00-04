#include "Zombie.hpp"

//constructor
Zombie::Zombie() {}

//Destructor
Zombie::~Zombie()
{
    std::cout << _name << " die" << std::endl;
}

//puplic methods
void Zombie::announce(void) const {
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

//setter
void Zombie::setName(std::string name){
    _name = name;
}