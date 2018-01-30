#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Zombie.hpp"

class ZombieEvent {
	public:
		ZombieEvent();
		~ZombieEvent();
		void setZombieType(std::string type);
		Zombie* newZombie(std::string name);
		void randomChump();
	protected:
	private:
		std::string _zombieType;
};

#endif
