
#include "phonebook.hpp"
#include <iomanip>
#include <cstdlib>

using std::string;
using std::cout;
using std::cin;
using std::endl;

Phonebook::Phonebook() {}

Phonebook::~Phonebook() {}

void Phonebook::ADD(size_t contactCount) {

    std::string input;
    size_t index = contactCount % 8;

    if (contactCount < 8) {
        std::cout << "ADD new contact" << endl;
    }  else {
        cout << "phonebook is full, replace a old contact" << endl;
    }

    while (1) {
        cout << "enter first name : ";
        std::getline(cin, input);
        if (std::cin.fail())
            exit(1);
        if (input == "EXIT" || input == "exit")
            exit(0);
        if (input == "")
            continue ;
        else {
            users[index].setFirstName(input);
            break ;
        }
    }

    while (1) {
        cout << "enter last name : ";
        std::getline(cin, input);
        if (std::cin.fail())
            exit(1);
        if (input == "EXIT" || input == "exit")
            exit(0);
        if (input == "")
            continue ;
        else {
            users[index].setLastName(input);
            break ;
        }
    }

    while (1) {
        cout << "enter nickname : ";
        std::getline(cin, input);
        if (std::cin.fail())
            exit(1);
        if (input == "EXIT" || input == "exit")
            exit(0);
        if (input == "")
            continue ;
        else {
            users[index].setNickName(input);
            break ;
        }
    }

    while (1) {
        cout << "Your Darkest Secrets is ? : ";
        std::getline(cin, input);
        if (std::cin.fail())
            exit(1);
        if (input == "EXIT" || input == "exit")
            exit(0);
        if (input == "")
            continue ;
        else  {  
            users[index].setDarkestSecret(input);
            break ;
        }
    }


    while (1) {
        cout << "enter your phone number : ";
        std::getline(cin, input);
        if (std::cin.fail())
            exit(1);
        if (input == "EXIT" || input == "exit")
            exit(0);
        if (input == "")
            continue ;
        else {
            users[index].setPhoneNumber(input);
            break ;
        }
    }
}

void Phonebook::diplayPhoneBook() {
    
    cout << "____________________________________________" << endl;
    cout << "|     Index|First Name|Last Name |NickName  |" << endl;
    for (int i = 0; i < 8; i++) {

        cout << "|" << "         " << i + 1;

        string firstName = users[i].getFirstName();
        if (firstName.size() > 9)
            firstName = firstName.substr(0, 9) + ".";
        cout << "|" << std::setw(10) << std::right << firstName;

        string lastName = users[i].getLastName();
        if (lastName.size() > 9)
            lastName = lastName.substr(0, 9) + ".";
        cout << "|" << std::setw(10) << std::right << lastName;
        
        string nickName = users[i].getNickName();
        if (nickName.size() > 9)
            nickName = nickName.substr(0, 9) + ".";
        cout << "|" << std::setw(10) << std::right << nickName << "|" << endl;
    }
}

void Phonebook::SEARCH() {
    
    Phonebook::diplayPhoneBook();
    cout << "select an index to diplay more infomations to this user : ";
    string tmp;
    std::getline(cin, tmp);
    if (std::cin.fail())
        exit(1);
    int index = (std::atoi(tmp.c_str()) - 1);
    if (index >= 0 && index < 8) {
        cout << "First Name : " << users[index].getFirstName() << endl;
        cout << "Second Name : " << users[index].getLastName() << endl;
        cout << "Nick Name : " << users[index].getNickName() << endl;
        cout << "Darkest secret : " << users[index].getDarkestSecret() << endl;
        cout << "Phone Number : " << users[index].getPhoneNumber() << endl; 
    }
    else {
        cout << "wrong number" << endl;
        return ;
    }
}