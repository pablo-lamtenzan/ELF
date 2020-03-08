#include "Fixed.hpp"

// Contructors

Fixed::Fixed() : __raw(0)
{
    std::cout << "call : default contructor" << std::endl;
}

Fixed::Fixed(const Fixed &src) : __raw(0)
{
    *this = src;
    std::cout << "call : copy contructor" << std::endl;
}

// Destructors

Fixed::~Fixed()
{
std::cout << "call : default destructor" << std::endl;
}

// Operators

Fixed
&Fixed &operator= (const Fixed &src)
{
    if (&src != this)
    {
        this->__raw = src.__raw;
        this->_fract = src.fract;
        std::cout << "call : equal operator" << std::endl;
    }
    return (*this);
}

// Methods

int
Fixed::getRawBits() const
{
    std::cout << "call : member fct" << std::endl;
    return (this->__raw);
}

void
Fixed::setRawBits(const int raw)
{
    std::cout << "call : member fct" << std::endl;
    this->__raw = raw;

}


int main( void ) {
Fixed a;
Fixed b( a );
Fixed c;
c = b;
std::cout << a.getRawBits() << std::endl;
std::cout << b.getRawBits() << std::endl;
std::cout << c.getRawBits() << std::endl;
return 0;
}
