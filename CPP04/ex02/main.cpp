#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
	const int size = 20;
	AAnimal* animals[size];

	for (int i = 0; i < size / 2; ++i) {
		animals[i] = new Dog();
	}

	for (int i = size / 2; i < size; ++i) {
		animals[i] = new Cat();
	}

	// Test d'instanciation directe de AAnimal
	// AAnimal* testAnimal = new AAnimal(); // Cette ligne doit provoquer une erreur de compilation

	for (int i = 0; i < size; i++) {
		delete animals[i];
	}
	return 0;
}