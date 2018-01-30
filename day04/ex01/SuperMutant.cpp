#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const& src) : Enemy(src){
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh ..." << std::endl;
}

void SuperMutant::takeDamage(int damage) {
	return Enemy::takeDamage(damage - 3);
}

SuperMutant& SuperMutant::operator=(SuperMutant const& rhs)
{
    if (this != &rhs) {
        this->_health = rhs.getHP();
        this->_type = rhs.getType();
    }
    return *this;
}
