
#include "contact.hpp"
#include "phonebook.hpp"

int main()
{
    Phonebook phonebook;
    std::string command;
    size_t contactCount = 0;
    while (1)
    {
        std::cout << "enter a command : ";
        std::getline(std::cin, command);
        if (std::cin.fail())
            return (1);
        else if (command == "ADD" || command == "add") {
            phonebook.ADD(contactCount);
            contactCount++;
        }
        else if (command == "SEARCH" || command == "search") {
            phonebook.SEARCH();
        }
        else if (command == "EXIT" || command == "exit") {
            exit(1);
        }   
        else
            std::cout << "Invalid command" << std::endl;
        }
    return (0);
}

