#include "Sorcerer.hpp"

Sorcerer::Sorcerer() {

}

Sorcerer::Sorcerer(std::string name, std::string title) :  _name(name), _title(title) {
	std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const& src) {
	*this = src;
	std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer() {
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same !" << std::endl;
}

//getters

std::string Sorcerer::getName() const {
	return this->_name;
}

std::string Sorcerer::getTitle() const {
	return this->_title;
}

//methods

void Sorcerer::polymorph(Victim const & rhs) const {
	rhs.getPolymorphed();
}

//operators

Sorcerer& Sorcerer::operator=(Sorcerer const& rhs) {
	if (this != &rhs) {
		this->_name = rhs.getName();
		this->_title = rhs.getTitle();
	}
	return *this;
}

std::ostream& operator<<(std::ostream& stream, Sorcerer const& rhs) {
	stream <<  "I am " << rhs.getName() << ", " << rhs.getTitle() << ", and I like ponies !" << std::endl;
	return stream;
}
