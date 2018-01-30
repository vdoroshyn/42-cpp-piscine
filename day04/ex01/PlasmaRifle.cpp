#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const& src) : AWeapon(src) {
}

PlasmaRifle::~PlasmaRifle() {
}

//operators

PlasmaRifle& PlasmaRifle::operator=(PlasmaRifle const& rhs) {
	AWeapon::operator=(rhs);
	return *this;
}

void PlasmaRifle::attack() const {
	std::cout<< "* piouuu piouuu piouuu *" << std::endl;
}
