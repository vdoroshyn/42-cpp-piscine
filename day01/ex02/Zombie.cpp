#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type) {
	std::cout << this->_name << " has been born" << std::endl;
}

Zombie::~Zombie() {
	std::cout << this->_name << " has died" << std::endl;
}

void Zombie::announce() {
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiiiinnnnnssss...." << std::endl;
}
