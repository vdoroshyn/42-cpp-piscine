#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() {
	this->_zombieType = "typical";
	std::srand(std::time(0));
}

ZombieEvent::~ZombieEvent() {

}

void ZombieEvent::setZombieType(std::string type) {
	this->_zombieType = type;
}

Zombie* ZombieEvent::newZombie(std::string name) {
	Zombie *newZombie = new Zombie(name, this->_zombieType);
	return (newZombie);
}

void ZombieEvent::randomChump() {
	std::string zombiePool[8] = {"ochayche",
									"abykov",
									"vdoroshy",
									"atrush",
									"mdubrows",
									"ireva",
									"ysavenko",
									"lfedorko"};

	int i = std::rand() % 8;
	Zombie obj = Zombie(zombiePool[i], this->_zombieType);
	obj.announce();
}
