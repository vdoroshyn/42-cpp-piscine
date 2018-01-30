#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main() {
	std::srand(std::time(0));
	int N = std::rand() % 15;

	ZombieHorde obj = ZombieHorde(N);
	obj.announce();
	return 0;
}
