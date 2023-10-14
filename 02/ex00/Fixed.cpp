#include "Fixed.hpp"

Fixed::Fixed(void) {

    std::cout << "Default constructor called" << std::endl;
    setRawBits(0);
}

Fixed::Fixed(const Fixed& obj) {

    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}


Fixed& Fixed::operator=(const Fixed& obj) {

    std::cout << "Copy assignment operator called" << std::endl;
    setRawBits(obj.getRawBits());
    return *this;
}

Fixed::~Fixed(void) {
    
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {

    std::cout << "getRawBits member function called" << std::endl;
    return this->_aFix;
}

void Fixed::setRawBits( int const raw) {

    this->_aFix = raw;
}