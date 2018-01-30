#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

class ClapTrap {

	public:
		ClapTrap();
		ClapTrap(std::string const name);
		ClapTrap(ClapTrap const& src);
		~ClapTrap();

		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string getName() const;
		int getHitPoints() const;
		int getMaxHitPoints() const;
		int getEnergyPoints() const;
		int getMaxEnergyPoints() const;
		int getLevel() const;
		int getMeleeAttackDamage() const;
		int getRangedAttackDamage() const;
		int getArmorDamageReduction() const;

		ClapTrap& operator=(ClapTrap const& rhs);

	protected:
		std::string _name;
		unsigned int _hitPoints;
		unsigned int _maxHitPoints;
		unsigned int _energyPoints;
		unsigned int _maxEnergyPoints;
		unsigned int _level;
		unsigned int _meleeAttackDamage;
		unsigned int _rangedAttackDamage;
		unsigned int _armorDamageReduction;
	private:
};

#endif
