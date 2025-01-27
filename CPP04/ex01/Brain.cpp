#include "Brain.hpp"


//constructor
Brain::Brain() {
	std::cout << MAGENTA << "Constructor Brain called" RST << std::endl;
}

Brain::Brain(const Brain& other) {
	std::cout << "Brain copied" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
}

//Destructor
Brain::~Brain() {
	std::cout << YELLOW "Brain destroyed!" RST << std::endl;
}

//operator assignation
Brain& Brain::operator=(const Brain& other)
{
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	std::cout << "Brain assigned" << std::endl;
	return *this;
}
