
#include "contact.hpp"
#include "phonebook.hpp"


Contact::Contact() {}

Contact::~Contact() {}

void    Contact::setFirstName(string firstName) {
    _firstName = firstName;
}

void    Contact::setLastName(string lastName) {
    _lastName = lastName;  
}

void    Contact::setNickName(string nickName) {
    _nickName = nickName;
}

void    Contact::setDarkestSecret(string darkestSecret) {
    _darkestSecret = darkestSecret;
}

void    Contact::setPhoneNumber(string phoneNumber) {
    _phoneNumber = phoneNumber;
}

void Contact::setIndex(size_t index) {
    _index = index;
}

const string Contact::getFirstName(void) const {
    return (_firstName);
}

const string Contact::getLastName(void) const {
    return (_lastName);
}

const string Contact::getNickName(void) const {
    return (_nickName);
}

const string Contact::getDarkestSecret(void) const {
    return (_darkestSecret);
}

const string Contact::getPhoneNumber(void) const {
    return (_phoneNumber);
}


size_t Contact::getIndex(void) {
    return (getIndex());
}

// const string Contact::getDisplayUser(void) const {
//     return (std::cout << "Fi" << getFirstName());
// }