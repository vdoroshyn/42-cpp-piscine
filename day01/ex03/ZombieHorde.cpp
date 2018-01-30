#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) : _numberOfZombies(N) {
	std::string zombieNames[8] = {"ochayche",
									"abykov",
									"vdoroshy",
									"atrush",
									"mdubrows",
									"ireva",
									"ysavenko",
									"lfedorko"};

	std::string zombieTypes[4] = {"Destroyer",
									"Plaguebearer",
									"Anal probe",
									"Crusher"};
									
	_horde = new Zombie[_numberOfZombies];
	for (int i = 0; i < _numberOfZombies; ++i) {
		_horde[i]._name = zombieNames[rand() % 8];
		_horde[i]._type = zombieTypes[rand() % 4];
	}
	std::cout << "FOR THE HORDE" << std::endl;
}

ZombieHorde::~ZombieHorde() {
	delete [] _horde;
	std::cout << "FOR THE ALLIANCE" << std::endl;
}

void ZombieHorde::announce() {
	for (int i = 0; i < _numberOfZombies; ++i) {
		_horde[i].announce();
	}
}
