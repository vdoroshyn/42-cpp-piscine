#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	this->_name = "Jesus";
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	std::cout << this->getName() << ": Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->_name = name;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
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
