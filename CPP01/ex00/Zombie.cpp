#include "Zombie.hpp"

//constructor
Zombie::Zombie(std::string name) : _name(name) {}

//Destructor
Zombie::~Zombie()
{
   cout << _name << " destroyed" << endl;
}

// methode
void    Zombie::announce() {
    cout << _name << ": BraiiiiiiinnnzzzZ..." << endl;
}
