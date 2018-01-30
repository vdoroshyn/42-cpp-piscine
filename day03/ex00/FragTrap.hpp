#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include <cstdlib> 
#include <ctime>

class FragTrap {

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const& src);
		~FragTrap();
		
		void rangedAttack(std::string const& target);
		void meleeAttack(std::string const& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		void vaulthunter_dot_exe(std::string const& target);

		std::string getName() const;
		int getHitPoints() const;
		int getMaxHitPoints() const;
		int getEnergyPoints() const;
		int getMaxEnergyPoints() const;
		int getLevel() const;
		int getMeleeAttackDamage() const;
		int getRangedAttackDamage() const;
		int getArmorDamageReduction() const;

		FragTrap& operator=(FragTrap const& rhs);

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
