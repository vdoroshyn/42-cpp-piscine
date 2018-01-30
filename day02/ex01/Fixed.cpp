#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor is called" << std::endl;
	this->setRawBits(0);
}

Fixed::Fixed(Fixed const& src) {
	std::cout << "Copy constructor is called" << std::endl;
	*this = src;
}

Fixed::Fixed(const int num) {
	std::cout << "Int constructor is called" << std::endl;
	this->setRawBits(num << this->_numberOfFractBits);
}

Fixed::Fixed(const float num) {
	std::cout << "Float constructor is called" << std::endl;
	this->setRawBits(roundf(num * (1 << this->_numberOfFractBits)));
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

float Fixed::toFloat() const {
	return float(this->_rawBits) / (1 << this->_numberOfFractBits);
}

int Fixed::toInt() const {
	return this->_rawBits >> this->_numberOfFractBits;
}

Fixed& Fixed::operator=(Fixed const& rhs) {
	std::cout << "Assignment operator is called" << std::endl;

	if (this != &rhs) {
		this->_rawBits = rhs.getRawBits();
	}
	return *this;
}

std::ostream& operator<<(std::ostream& stream, Fixed const& rhs) {
	stream << rhs.toFloat();
	return stream;
}
