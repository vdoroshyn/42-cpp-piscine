#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap() {
	this->_name = "Marian";
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
	std::cout << this->getName() << ": Now I will dominate!" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name) {
	this->_name = name;
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
	std::cout << this->getName() << ": Heyyah!" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const& src) {
	*this = src;
	std::cout << this->getName() << ": I'm flying! I'm really flying!" << std::endl;
}

NinjaTrap::~NinjaTrap() {
	std::cout << this->getName() << ": No fair! I wasn't ready." << std::endl;
}

//methods

void NinjaTrap::rangedAttack(std::string const& target) {
	std::cout << "N1NJ4-TP <" << this->getName() << "> attacks <" << target << "> at range, causing <" << this->getRangedAttackDamage() << "> points of damage !" << std::endl;
}

void NinjaTrap::meleeAttack(std::string const& target) {
	std::cout << "N1NJ4-TP <" << this->getName() << "> attacks <" << target << "> at range, causing <" << this->getMeleeAttackDamage() << "> points of damage !" << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap const& rhs) {
	std::cout << this->getName() << " farts loudly in " << rhs.getName() << "'s face" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap const& rhs) {
	std::cout << this->getName() << " spits right between " << rhs.getName() << "'s eyes" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap const& rhs) {
	std::cout << this->getName() << " shows his dirty, smelly crotch to " << rhs.getName() << std::endl;
}

//operator overloads

NinjaTrap& NinjaTrap::operator=(NinjaTrap const& rhs) {
	std::cout << "Recompiling my combat code!" << std::endl;

	if (this != &rhs) {
		this->_name = rhs.getName();
		this->_hitPoints = getHitPoints();
		this->_maxHitPoints = getMaxHitPoints();
		this->_energyPoints = getEnergyPoints();
		this->_maxEnergyPoints = getMaxEnergyPoints();
		this->_level = getLevel();
		this->_meleeAttackDamage = getMeleeAttackDamage();
		this->_rangedAttackDamage = getRangedAttackDamage();
		this->_armorDamageReduction = getArmorDamageReduction();
	}
	return *this;
}
