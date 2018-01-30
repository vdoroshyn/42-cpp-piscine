#include "FragTrap.hpp"

FragTrap::FragTrap() :
			_name("Jesus"), _hitPoints(100), _maxHitPoints(100),
			_energyPoints(100), _maxEnergyPoints(100), _level(1),
			_meleeAttackDamage(30), _rangedAttackDamage(20), _armorDamageReduction(5)
{
	std::cout << this->getName() << ": Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!" << std::endl;
}

FragTrap::FragTrap(std::string name) :
			_name(name), _hitPoints(100), _maxHitPoints(100),
			_energyPoints(100), _maxEnergyPoints(100), _level(1),
			_meleeAttackDamage(30), _rangedAttackDamage(20), _armorDamageReduction(5) 
{
	std::cout << this->getName() << ": Look out everybody! Things are about to get awesome!" << std::endl;
}

FragTrap::FragTrap(FragTrap const& src) {
	*this = src;
	std::cout << this->getName() << ": This time it'll be awesome, I promise!" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << this->getName() << ": I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
}

//methods

void FragTrap::rangedAttack(std::string const& target) {
	std::cout << "FR4G-TP <" << this->getName() << "> attacks <" << target << "> at range, causing <" << this->getRangedAttackDamage() << "> points of damage !" << std::endl;
}

void FragTrap::meleeAttack(std::string const& target) {
	std::cout << "FR4G-TP <" << this->getName() << "> attacks <" << target << "> at range, causing <" << this->getMeleeAttackDamage() << "> points of damage !" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints == 0) {
		std::cout << "FR4G-TP <" << this->getName() << "> is dead already !" << std::endl;
	} else if (amount <= this->_armorDamageReduction) {
		std::cout << "FR4G-TP <" << this->getName() << "> received no damage due to his strong armor !" << std::endl;
	} else {
		if (this->_hitPoints < amount - this->_armorDamageReduction) {
			this->_hitPoints = 0;
			std::cout << "FR4G-TP <" << this->getName() << "> has just died !" << std::endl;
		} else {
			this->_hitPoints = this->_hitPoints - amount + this->_armorDamageReduction;
			std::cout << "FR4G-TP <" << this->getName() << "> receives <" << amount << "> points of damage !" << std::endl;
			std::cout << "FR4G-TP <" << this->getName() << "> has <" << this->_hitPoints << "> hitpoints !" << std::endl;
		}
	}
}

void FragTrap::beRepaired(unsigned int amount) {
	if (this->_hitPoints == this->_maxHitPoints) {
		std::cout << "FR4G-TP <" << this->getName() << "> has full health !" << std::endl;
	} else if (this->_hitPoints == 0) {
		std::cout << "FR4G-TP <" << this->getName() << "> is dead already !" << std::endl;
	} else {
		if (this->_hitPoints + amount > this->_maxHitPoints) {
			this->_hitPoints = this->_maxHitPoints;
			std::cout << "Overheal is not possible in this game !" << std::endl;
		} else {
			this->_hitPoints += amount;
			std::cout << "FR4G-TP <" << this->getName() << "> has been healed for <" << amount <<"> hitpoints !" << std::endl;
		}
		std::cout << "FR4G-TP <" << this->getName() << "> has <" << this->_hitPoints <<"> hitpoints !" << std::endl;
	}
}

void FragTrap::vaulthunter_dot_exe(std::string const& target) {
	std::string randomAttacks[] = {"Chidori", "Amaterasu", "Rasengan", "Chibaku Tensei", "Tsukuyomi"}; 
    int i = std::rand() % 5; 

	if (this->_energyPoints < 25) {
		std::cout << "FR4G-TP <" << this->getName() << "> has only <" << this->_energyPoints <<"> energy !" << std::endl;
	} else {
		this->_energyPoints -= 25;
		std::cout << "FR4G-TP <" << this->getName() << "> has used <" << randomAttacks[i] <<"> on " << target << " and has " << this->_energyPoints << " energy left !" << std::endl;
	}
}

//getters

std::string FragTrap::getName() const {
	return this->_name;
}

int FragTrap::getHitPoints() const {
	return this->_hitPoints;
}

int FragTrap::getMaxHitPoints() const {
	return this->_maxHitPoints;
}

int FragTrap::getEnergyPoints() const {
	return this->_energyPoints;
}

int FragTrap::getMaxEnergyPoints() const {
	return this->_maxEnergyPoints;
}

int FragTrap::getLevel() const {
	return this->_level;
}

int FragTrap::getMeleeAttackDamage() const {
	return this->_meleeAttackDamage;
}

int FragTrap::getRangedAttackDamage() const {
	return this->_rangedAttackDamage;
}

int FragTrap::getArmorDamageReduction() const {
	return this->_armorDamageReduction;
}

//operator overloads

FragTrap& FragTrap::operator=(FragTrap const& rhs) {
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
