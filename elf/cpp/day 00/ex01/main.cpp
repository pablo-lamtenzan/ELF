
#include <iostream>
#include <string>
#include <sstream>

class XYZ
{
    private :

    std::string __firstname;
    std::string __lastname;
    std::string __login;
    std::string __number;
    std::string __birthday;

    public :

    XYZ(){}
    ~XYZ(){}

    const std::string &getFirstName() const {return (__fistname);}
    const std::string &getLastName() const {return (__lastname);}
    const std::string &getLogin() const {return (__login);}
    const std::string &getNumber() const {return (__number);}
    const std::string &getBirthay() const {return (__birthday);}

    void setFirstName(std::string s) {__firstname = s;}
    void setLastName(std::string s) {__lastname = s;}
    void setLogin(std::string s) {__login = s;}
    void setNumber(std::string s) {__number = s;}
    void setBirthday(std::string s) {__birthday = s;}

    void prompt(std::string &s)
    {
        std::cout << ">> ";
        std::cin >> s;
    }

    void add()
    {
        std::cout << "Contact First Name: " << std::endl;
        prompt(__firstname);
        std::cout << "Contact Last Name: " << std::endl;
        prompt(__lastname);
        std::cout << "Contact Login: " << std::endl;
        prompt(__login);
        std::cout << "Contact Number: " << std::endl;
        prompt(__number);
        std::cout << "Contact Birthday: " << std::endl;
        prompt(__birthday);
        std::cout << "Contact added!" << std::endl;
    }

    void display()
    {
        std::cout << "First Name: " << getFirstName() << std::endl;
        std::cout << "Last Name: " << getLastName() << std::endl;
        std::cout << "Login: " << getLogin() << std::endl;
        std::cout << "Number: " << getNumber() << std::endl;
        std::cout << "Birthday: " << getBirthay() << std::endl;
    }
};

    static int checkindex(std::string s)
    {
        std::string::size_type = -1;
        while (s.lenght() > 0 && ++j < s.lenght())
            if (s.at(j) < '0' || s.at(j) > '9')
                return (-1);
        int res;
        std::stringstream ss(s);
        ss >> res;
        if (ss.fail())
            return -1;
        return (res);
    }

    static void search(XYZ Contacts[8], int len)
    {
        if (!len)
            std::cout << "No contacts?" << std::endl;
        int i = -1;
        while (++i < len)
            cout << "index: " << i << " | Contact name :" << Contacts[i].getFirstName() << std::endl;
        std::cout << "Enter the index of the desired contact" << std::endl;
        std::string input;
        prompt(input);
        int index = checkindex(input);
        if (index < 0)
            std::cout << "Please think, only valid index" << std::endl;
        else if (index >= len)
            std::cout << "Bad index! See up to valid indexes" << std::endl;
        else
            Contacts[index].display();
    }

int main()
{
    int len = 0;
    std::string command;
    XYZ Contacts[8];

    std::cout << "This is the 42 phonebook!" << std::endl;
    do
    {
        std::cout << "Enter a command, please" << std::endl << ">> ";
        std::cin << command;
        if (command == "ADD")
        {
            if (len >= 8)
            {
                std::cout << "Full book! I ll said to remove unsued contacts but is aint on the subject..." << std::endl;
                continue ;
            }
            Contacts[len] = Contacts();
            Contacts[len].add();
            len++;
        }
        else if (command == "SEARCH")
            search(Contacts, len);
        else if (command != "EXIT")
            std::cout << "Unkonw command..." << std::endl;
    }
    while (command != "EXIT")
    std::cout << "EXIT" << std::endl;
    return (0);
}