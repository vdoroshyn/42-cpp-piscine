#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor is called" << std::endl;
	this->setRawBits(0);
}

Fixed::Fixed(Fixed const& src) {
	std::cout << "Copy constructor is called" << std::endl;
	*this = src;
}

Fixed::~Fixed() {
	std::cout << "Destructor is called" << std::endl;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits method is called" << std::endl;
	return this->_rawBits;
}

void Fixed::setRawBits(int const raw) {
	this->_rawBits = raw;
}

Fixed& Fixed::operator=(Fixed const& rhs) {
	std::cout << "Assignment operator is called" << std::endl;

	if (this != &rhs) {
		this->_rawBits = rhs.getRawBits();
	}
	return *this;
}
