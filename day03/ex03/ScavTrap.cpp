#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	this->_name = "Judas";
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;

	std::cout << this->getName() << ": Glitching weirdness is a term of endearment, right?" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;

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
