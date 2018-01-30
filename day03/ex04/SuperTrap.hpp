#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include <iostream>
#include <string>
#include <cstdlib> 
#include <ctime>
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {

	public:
		SuperTrap();
		SuperTrap(std::string name);
		SuperTrap(SuperTrap const& src);
		~SuperTrap();

		void rangedAttack(std::string const& target);
		void meleeAttack(std::string const& target);

		SuperTrap& operator=(SuperTrap const& rhs);

	protected:
	private:
};

#endif
