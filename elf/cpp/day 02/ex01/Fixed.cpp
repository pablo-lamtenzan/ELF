#include "Fixed.hpp"

// Contructors

Fixed::Fixed() : __raw(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src) : __raw(0)
{
    *this = src;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int intValue) : __raw(intValue << __fract)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floatValue) :  __raw(roundf(floatValue * __powershift))
{
    std::cout << "Float constructor called" << std::endl;
}
// Destructors

Fixed::~Fixed()
{
std::cout << "Destructor called" << std::endl;
}

// Operators

Fixed
&Fixed &operator= (const Fixed &src)
{
    if (&src != this)
    {
        this->__raw = src.__raw;
        this->_fract = src.fract;
        std::cout << "Copy constructor called" << std::endl;
    }
    return (*this);
}

std::ostream
&Fixed::operator<< (std::ostream &out, const Fixed &src)
{
    out << c.toFloat();
    return (out);
}

// Methods

int
Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->__raw);
}

void
Fixed::setRawBits(const int raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->__raw = raw;
}

float
Fixed::toFloat() const
{
    return (float(this->__raw) / this->__powershift);
}

int
Fixed::toInt() const
{
    return (this->__raw >> this->__fract);
}

int main( void ) {
Fixed a;
Fixed const b( 10 );
Fixed const c( 42.42f );
Fixed const d( b );
a = Fixed( 1234.4321f );
std::cout << "a is " << a << std::endl;
std::cout << "b is " << b << std::endl;
std::cout << "c is " << c << std::endl;
std::cout << "d is " << d << std::endl;
std::cout << "a is " << a.toInt() << " as integer" << std::endl;
std::cout << "b is " << b.toInt() << " as integer" << std::endl;
std::cout << "c is " << c.toInt() << " as integer" << std::endl;
std::cout << "d is " << d.toInt() << " as integer" << std::endl;
return 0;
}
