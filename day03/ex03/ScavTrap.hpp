#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include <cstdlib> 
#include <ctime>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const& src);
		~ScavTrap();
		
		void rangedAttack(std::string const& target);
		void meleeAttack(std::string const& target);
		void challengeNewcomer();

		ScavTrap& operator=(ScavTrap const& rhs);

	protected:
	private:
};

#endif
