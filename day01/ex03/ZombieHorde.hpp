#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Zombie.hpp"

class ZombieHorde {
	public:
		ZombieHorde(int N);
		~ZombieHorde();
		void announce();
	protected:
	private:
		int _numberOfZombies;
		Zombie* _horde;
};

#endif
