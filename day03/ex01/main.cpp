#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	FragTrap obj1("Vasya");
	FragTrap obj2("Petya");
	std::srand(std::time(0));

	obj1.rangedAttack(obj2.getName());
	obj1.meleeAttack(obj2.getName());
	obj1.beRepaired(10);
	obj1.takeDamage(4);
	obj1.takeDamage(44);
	obj1.beRepaired(55);
	obj1.takeDamage(40);
	obj1.beRepaired(20);
	obj1.takeDamage(20);
	obj1.beRepaired(30);
	obj1.takeDamage(200);
	obj1.takeDamage(20);
	obj1.vaulthunter_dot_exe(obj2.getName());
	obj1.vaulthunter_dot_exe(obj2.getName());
	obj1.vaulthunter_dot_exe(obj2.getName());
	obj1.vaulthunter_dot_exe(obj2.getName());
	obj1.vaulthunter_dot_exe(obj2.getName());

	ScavTrap obj3("Katya");
	ScavTrap obj4("Jenya");

	obj4.rangedAttack(obj3.getName());
	obj4.meleeAttack(obj3.getName());
	obj4.beRepaired(10);
	obj4.takeDamage(4);
	obj4.takeDamage(44);
	obj4.beRepaired(55);
	obj4.takeDamage(40);
	obj4.beRepaired(20);
	obj4.takeDamage(20);
	obj4.beRepaired(30);
	obj4.takeDamage(200);
	obj4.takeDamage(20);
	obj4.challengeNewcomer();
	obj4.challengeNewcomer();
	obj4.challengeNewcomer();
	obj4.challengeNewcomer();
	obj4.challengeNewcomer();

	return 0;
}
