#pragma once

#define RST   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define REVERSED "\033[7m"
#define WHITE   "\033[37m"

#include <iostream>
#include <string>

class Brain {
	private:
		std::string ideas[100];
		// Brain* _brain;

	public:
		Brain(); //default constructor
		Brain(const Brain& other); //copy constructor
		~Brain(); //destructor
		Brain& operator=(const Brain& other); //operator assignation
};