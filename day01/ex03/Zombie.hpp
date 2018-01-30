#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
	public:
		Zombie();
		~Zombie();
		void announce();
		std::string _name;
		std::string _type;
	protected:
	private:
};

#endif
