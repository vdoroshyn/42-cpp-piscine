#include "Human.hpp"
#include <iostream>
#include <string>

Human::Human() : newBrain(3, 25) {
	std::cout << "The human has been born" << std::endl;
}

Human::~Human() {
	std::cout << "The human has died" << std::endl;
}

Brain const& Human::getBrain()
{
	return (newBrain);
}


std::string Human::identify()
{
	return (newBrain.identify());
}
