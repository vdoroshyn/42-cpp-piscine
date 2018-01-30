#include "Brain.hpp"
#include <iostream>
#include <string>
#include <sstream>

Brain::Brain(int weight, int age) : _weight(weight), _age(age) {
	std::cout << "The brain has been created" << std::endl;
}

Brain::~Brain() {
	std::cout << "The brain has been destroyed" << std::endl;
}

std::string Brain::identify() const
{
	std::stringstream	stream;

	stream << this;
	return stream.str();
}
