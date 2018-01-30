#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include <cstdlib> 
#include <ctime>

class ScavTrap {

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const& src);
		~ScavTrap();
		
		void rangedAttack(std::string const& target);
		void meleeAttack(std::string const& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		void challengeNewcomer();

		std::string getName() const;
		int getHitPoints() const;
		int getMaxHitPoints() const;
		int getEnergyPoints() const;
		int getMaxEnergyPoints() const;
		int getLevel() const;
		int getMeleeAttackDamage() const;
		int getRangedAttackDamage() const;
		int getArmorDamageReduction() const;

		ScavTrap& operator=(ScavTrap const& rhs);

	protected:
	private:
		std::string _name;
		unsigned int _hitPoints;
		unsigned int _maxHitPoints;
		unsigned int _energyPoints;
		unsigned int _maxEnergyPoints;
		unsigned int _level;
		unsigned int _meleeAttackDamage;
		unsigned int _rangedAttackDamage;
		unsigned int _armorDamageReduction;
};

#endif
