#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : FragTrap(), NinjaTrap() {
	this->_name = "Super";
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	std::cout << this->getName() << ": My power is OVER 9000!!!!!" << std::endl;
}

SuperTrap::SuperTrap(std::string name) : FragTrap(name), NinjaTrap(name) {
	this->_name = name;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	std::cout << this->getName() << ": I have so much untapped power" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const& src) {
	*this = src;
	std::cout << this->getName() << ": It's alive. Alive!!!" << std::endl;
}

SuperTrap::~SuperTrap() {
	std::cout << this->getName() << ": death is just the beginning" << std::endl;
}

//methods

void SuperTrap::rangedAttack(std::string const& target) {
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const& target) {
	NinjaTrap::meleeAttack(target);
}

//operator overloads

SuperTrap& SuperTrap::operator=(SuperTrap const& rhs) {
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
