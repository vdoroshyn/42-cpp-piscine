#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& club) : _name(name), _weapon(club) {
	std::cout << "HumanA (" << this->_name << ") has been born" << std::endl;
}

HumanA::~HumanA() {
	std::cout << "HumanA (" << this->_name << ") has died" << std::endl;
}

void HumanA::attack() {
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}
