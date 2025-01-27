#ifndef PHONEBOOK_HPP_
#define PHONEBOOK_HPP_

#include <iostream>
#include "contact.hpp"

class Phonebook
{
    private:
    Contact users[8];
    void diplayPhoneBook();

    public:
    Phonebook();
    ~Phonebook();
    void ADD(size_t contactCount);
    void SEARCH();
};
#endif
