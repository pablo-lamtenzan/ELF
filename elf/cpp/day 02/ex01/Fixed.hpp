#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <ostream>
#include <string>

class Fixed
{
    private :

    int __raw;
    static const int __fract = 8; // dont work ? set it like global xd
    static const int __powershift = 256;
    static const int __mask = 255;

    public :

    // Constructors
    Fixed();
    Fixed(const int intValue);
    Fixed(const float floatValue);
    Fixed(const Fixed &src);

    // Destructors
    ~Fixed();

    // Operators
    Fixed &operator= (const Fixed &src);

    // Shared Methods
    int getRawBits() const;
    void setRawBits(int const raw);
    float toFloat() const;
    int toInt() const;

};

std::ostream &operator<< (std::ostream &out, const Fixed &src);

#endif