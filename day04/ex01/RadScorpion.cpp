#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion") {
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const& src) : Enemy(src){
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion() {
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion& RadScorpion::operator=(RadScorpion const& rhs)
{
    if (this != &rhs) {
        this->_health = rhs.getHP();
        this->_type = rhs.getType();
    }
    return *this;
}
