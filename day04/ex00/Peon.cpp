#include "Peon.hpp"

Peon::Peon() {
}

Peon::Peon(std::string name) : Victim(name) {
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const& src) : Victim(src) {
	*this = src;
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon() {
	std::cout << "Bleuark..." << std::endl;
}

//operators

Peon& Peon::operator=(Peon const& rhs) {
	if (this != &rhs) {
		this->_name = rhs.getName();
	}
	return *this;
}

std::ostream& operator<<(std::ostream& stream, Peon const& rhs) {
	stream << "I'm " << rhs.getName() << " and I like otters !" << std::endl;
	return stream;
}

//methods

void Peon::getPolymorphed() const {
	std::cout << this->_name << " has been turned into a pink pony !" << std::endl;
}
