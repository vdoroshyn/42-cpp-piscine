#include "Pony.hpp"

Pony::Pony(std::string name) : _name(name) {
	std::cout << this->name << " is born" << std::endl;
}

Pony::~Pony() {
	std::cout << this->name << " heroically dies" << std::endl;
}

void Pony::makeSounds() {
	std::cout << this->name << " makes indistinguishable sounds while chewing your hat" << std::endl;
}

void Pony::poop() {
	std::cout << this->name << " digests your hat and poops it out" << std::endl;
}
