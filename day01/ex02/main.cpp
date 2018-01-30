#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main() {
	ZombieEvent obj;

	obj.randomChump();
	obj.setZombieType("lal");
	obj.randomChump();
	obj.randomChump();
	obj.randomChump();
	obj.randomChump();
	Zombie * obj2 = obj.newZombie("Mister Red");
    obj2->announce();
    delete obj2;
	return 0;
}
