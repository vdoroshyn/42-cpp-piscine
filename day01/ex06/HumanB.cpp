#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {
	std::cout << "HumanB (" << this->_name << ") has been born" << std::endl;
}

HumanB::~HumanB() {
	std::cout << "HumanB (" << this->_name << ") has died" << std::endl;
}

void HumanB::attack() {
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}
