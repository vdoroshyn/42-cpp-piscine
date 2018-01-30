#include "ScavTrap.hpp"

ScavTrap::ScavTrap() :
			_name("Judas"), _hitPoints(100), _maxHitPoints(100),
			_energyPoints(50), _maxEnergyPoints(50), _level(1),
			_meleeAttackDamage(20), _rangedAttackDamage(15), _armorDamageReduction(3)
{
	std::cout << this->getName() << ": Glitching weirdness is a term of endearment, right?" << std::endl;
}

ScavTrap::ScavTrap(std::string name) :
			_name(name), _hitPoints(100), _maxHitPoints(100),
			_energyPoints(50), _maxEnergyPoints(50), _level(1),
			_meleeAttackDamage(20), _rangedAttackDamage(15), _armorDamageReduction(3) 
{
	std::cout << this->getName() << ": Recompiling my combat code!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& src) {
	*this = src;
	std::cout << this->getName() << ": Let's get this party started!" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << this->getName() << ": Argh arghargh death gurgle gurglegurgle urgh... death." << std::endl;
}

//methods

void ScavTrap::rangedAttack(std::string const& target) {
	std::cout << "SC4V-TP <" << this->getName() << "> attacks <" << target << "> at range, causing <" << this->getRangedAttackDamage() << "> points of damage !" << std::endl;
}

void ScavTrap::meleeAttack(std::string const& target) {
	std::cout << "SC4V-TP <" << this->getName() << "> attacks <" << target << "> at range, causing <" << this->getMeleeAttackDamage() << "> points of damage !" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints == 0) {
		std::cout << "SC4V-TP <" << this->getName() << "> is dead already !" << std::endl;
	} else if (amount <= this->_armorDamageReduction) {
		std::cout << "SC4V-TP <" << this->getName() << "> received no damage due to his strong armor !" << std::endl;
	} else {
		if (this->_hitPoints < amount - this->_armorDamageReduction) {
			this->_hitPoints = 0;
			std::cout << "SC4V-TP <" << this->getName() << "> has just died !" << std::endl;
		} else {
			this->_hitPoints = this->_hitPoints - amount + this->_armorDamageReduction;
			std::cout << "SC4V-TP <" << this->getName() << "> receives <" << amount << "> points of damage !" << std::endl;
			std::cout << "SC4V-TP <" << this->getName() << "> has <" << this->_hitPoints << "> hitpoints !" << std::endl;
		}
	}
}

void ScavTrap::beRepaired(unsigned int amount) {
	if (this->_hitPoints == this->_maxHitPoints) {
		std::cout << "SC4V-TP <" << this->getName() << "> has full health !" << std::endl;
	} else if (this->_hitPoints == 0) {
		std::cout << "SC4V-TP <" << this->getName() << "> is dead already !" << std::endl;
	} else {
		if (this->_hitPoints + amount > this->_maxHitPoints) {
			this->_hitPoints = this->_maxHitPoints;
			std::cout << "Overheal is not possible in this game !" << std::endl;
		} else {
			this->_hitPoints += amount;
			std::cout << "SC4V-TP <" << this->getName() << "> has been healed for <" << amount <<"> hitpoints !" << std::endl;
		}
		std::cout << "SC4V-TP <" << this->getName() << "> has <" << this->_hitPoints <<"> hitpoints !" << std::endl;
	}
}

void ScavTrap::challengeNewcomer() {
	std::string challenges[] = {"Blood Bucket", "Raw Onion", "The Wasabi", "Dick in the Pic", "Hot Pepper"}; 
    int i = std::rand() % 5; 

	if (this->_energyPoints < 25) {
		std::cout << "SC4V-TP <" << this->getName() << "> has only <" << this->_energyPoints <<"> energy !" << std::endl;
	} else {
		this->_energyPoints -= 25;
		std::cout << "SC4V-TP <" << this->getName() << "> challenges the newcomer in <" << challenges[i] << " Challenge> and has " << this->_energyPoints << " energy left !" << std::endl;
	}
}

//getters

std::string ScavTrap::getName() const {
	return this->_name;
}

int ScavTrap::getHitPoints() const {
	return this->_hitPoints;
}

int ScavTrap::getMaxHitPoints() const {
	return this->_maxHitPoints;
}

int ScavTrap::getEnergyPoints() const {
	return this->_energyPoints;
}

int ScavTrap::getMaxEnergyPoints() const {
	return this->_maxEnergyPoints;
}

int ScavTrap::getLevel() const {
	return this->_level;
}

int ScavTrap::getMeleeAttackDamage() const {
	return this->_meleeAttackDamage;
}

int ScavTrap::getRangedAttackDamage() const {
	return this->_rangedAttackDamage;
}

int ScavTrap::getArmorDamageReduction() const {
	return this->_armorDamageReduction;
}

//operator overloads

ScavTrap& ScavTrap::operator=(ScavTrap const& rhs) {
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
