#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include <iostream>
#include <string>
#include <cstdlib> 
#include <ctime>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap {

	public:
		NinjaTrap();
		NinjaTrap(std::string name);
		NinjaTrap(NinjaTrap const& src);
		~NinjaTrap();

		void rangedAttack(std::string const& target);
		void meleeAttack(std::string const& target);
		void ninjaShoebox(NinjaTrap const& rhs);
		void ninjaShoebox(ScavTrap const& rhs); 
		void ninjaShoebox(FragTrap const& rhs);

		NinjaTrap& operator=(NinjaTrap const& rhs);

	protected:
	private:
};

#endif
