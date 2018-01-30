#include "Zombie.hpp"

Zombie::Zombie() {
}

Zombie::~Zombie() {
}

void Zombie::announce() {
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiiiinnnnnssss...." << std::endl;
}
