#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include <cstdlib> 
#include <ctime>
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const& src);
		~FragTrap();

		void rangedAttack(std::string const& target);
		void meleeAttack(std::string const& target);
		void vaulthunter_dot_exe(std::string const& target);

		FragTrap& operator=(FragTrap const& rhs);

	protected:
	private:
};

#endif
