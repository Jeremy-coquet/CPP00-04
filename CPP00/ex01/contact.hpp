
#ifndef CONTACT_HPP_
#define CONTACT_HPP_

#include <string>
#include <iostream>

using std::string;

class Contact {
    private:
    int         _index;
    string      _firstName;
    string      _lastName;
    string      _nickName;    
    string      _darkestSecret;
    string      _phoneNumber;

    public:
    Contact();
    ~Contact();
    void setIndex(size_t index);
    void setFirstName(string firstName);
    void setLastName(string LastName);
    void setNickName(string nickName);
    void setDarkestSecret(string darkestSecret);
    void setPhoneNumber(string phoneNumber);
    size_t getIndex(void);
    const string getFirstName(void) const;
    const string getLastName(void) const;
    const string getNickName(void) const;
    const string getDarkestSecret(void) const;
    const string getPhoneNumber(void) const;
};
#endif