#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

using std::string;
using std::endl;
using std::cout;

class Zombie {

    public:
        Zombie(string name);
        ~Zombie();
        void announce();

    private:
        string _name;
};

#endif