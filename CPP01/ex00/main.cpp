#include "Zombie.hpp"

Zombie *newZombie(std::string name);
void randomChump(std::string name);

int main(void) {
    Zombie zombie1("Foo");
    zombie1.announce();


    cout << std::endl << "with randomChup function" << std::endl;
    randomChump("randomChump");
    std::cout << std::endl;

    Zombie *onHeap;

    onHeap = newZombie("onHeap");
    onHeap->announce();
    delete(onHeap);
    std::cout << "onHeap was destroyed by delete(), and then Foo will be destroyed by the end of the program" << std::endl;
    return (0);
}