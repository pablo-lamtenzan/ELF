
#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
# include <exception>

class NotMatchException : public std::exeption
{
    public :

    // Shared Methods
    virtual const char *what() const throw();
};

const char
*NotMatchException::what() const throw()
{
    std::cout << "Not match for the given integer in container" << std::endl;
}

template <typename T>
int &easyfind(T t, int i)
{
    template T::iterator f;
    if ((f = std::find(t.begin(), t.end(), i)) == t.end())
        throw NotMatchException();
    return (*f);
}       

#endif