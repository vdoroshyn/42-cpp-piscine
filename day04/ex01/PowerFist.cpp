#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {
}

PowerFist::PowerFist(PowerFist const& src) : AWeapon(src) {
}

PowerFist::~PowerFist() {
}

//operators

PowerFist& PowerFist::operator=(PowerFist const& rhs) {
	AWeapon::operator=(rhs);
	return *this;
}

void PowerFist::attack() const {
	std::cout<< "* pschhh... SBAM! *" << std::endl;
}
