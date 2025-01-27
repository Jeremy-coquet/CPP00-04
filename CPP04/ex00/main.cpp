#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

static void testAnimal() {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* jbis = new Cat();
	j = jbis;
	//Dog dog1 _name = rex;
	//Dog dog2 _name = lassy;
	dog2.makesound();
	
	jbis.makesound()
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
}

static void testWrongAnimal() {
	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* i = new WrongCat();
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the WrongCat sound!
	meta->makeSound();
	delete meta;
	delete i;
}

int main()
{
	testAnimal();
	std::cout << std::endl << std::endl;
	testWrongAnimal();
return 0;
}