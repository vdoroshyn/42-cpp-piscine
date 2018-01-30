#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	this->_name = "default name";
	this->_hitPoints = 0;
	this->_maxHitPoints = 0;
	this->_energyPoints = 0;
	this->_maxEnergyPoints = 0;
	this->_level = 1;
	this->_meleeAttackDamage = 0;
	this->_rangedAttackDamage = 0;
	this->_armorDamageReduction = 0;
	std::cout << "ClapTrap constructor is called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
	this->_name = name;
	this->_hitPoints = 0;
	this->_maxHitPoints = 0;
	this->_energyPoints = 0;
	this->_maxEnergyPoints = 0;
	this->_level = 1;
	this->_meleeAttackDamage = 0;
	this->_rangedAttackDamage = 0;
	this->_armorDamageReduction = 0;
	std::cout << "ClapTrap constructor with a name is called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& src) {
	*this = src;
	std::cout << "Copy ClapTrap constructor is called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor is called" << std::endl;
}

//methods

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints == 0) {
		std::cout << "CLAP-TP <" << this->getName() << "> is dead already !" << std::endl;
	} else if (amount <= this->_armorDamageReduction) {
		std::cout << "CLAP-TP <" << this->getName() << "> received no damage due to his strong armor !" << std::endl;
	} else {
		if (this->_hitPoints < amount - this->_armorDamageReduction) {
			this->_hitPoints = 0;
			std::cout << "CLAP-TP <" << this->getName() << "> has just died !" << std::endl;
		} else {
			this->_hitPoints = this->_hitPoints - amount + this->_armorDamageReduction;
			std::cout << "CLAP-TP <" << this->getName() << "> receives <" << amount << "> points of damage !" << std::endl;
			std::cout << "CLAP-TP <" << this->getName() << "> has <" << this->_hitPoints << "> hitpoints !" << std::endl;
		}
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hitPoints == this->_maxHitPoints) {
		std::cout << "CLAP-TP <" << this->getName() << "> has full health !" << std::endl;
	} else if (this->_hitPoints == 0) {
		std::cout << "CLAP-TP <" << this->getName() << "> is dead already !" << std::endl;
	} else {
		if (this->_hitPoints + amount > this->_maxHitPoints) {
			this->_hitPoints = this->_maxHitPoints;
			std::cout << "Overheal is not possible in this game !" << std::endl;
		} else {
			this->_hitPoints += amount;
			std::cout << "CLAP-TP <" << this->getName() << "> has been healed for <" << amount <<"> hitpoints !" << std::endl;
		}
		std::cout << "CLAP-TP <" << this->getName() << "> has <" << this->_hitPoints <<"> hitpoints !" << std::endl;
	}
}

//getters

std::string ClapTrap::getName() const {
	return this->_name;
}

int ClapTrap::getHitPoints() const {
	return this->_hitPoints;
}

int ClapTrap::getMaxHitPoints() const {
	return this->_maxHitPoints;
}

int ClapTrap::getEnergyPoints() const {
	return this->_energyPoints;
}

int ClapTrap::getMaxEnergyPoints() const {
	return this->_maxEnergyPoints;
}

int ClapTrap::getLevel() const {
	return this->_level;
}

int ClapTrap::getMeleeAttackDamage() const {
	return this->_meleeAttackDamage;
}

int ClapTrap::getRangedAttackDamage() const {
	return this->_rangedAttackDamage;
}

int ClapTrap::getArmorDamageReduction() const {
	return this->_armorDamageReduction;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& rhs) {
	std::cout << "ClapTrap recompiling" << std::endl;

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
