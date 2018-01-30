#include "Sorcerer.hpp"
#include <iostream>
#include "Victim.hpp"
#include "Peon.hpp"

int main() {
    Sorcerer *robert = new Sorcerer("Robert", "the Magnificent");
    Victim *jim = new Victim("Jimmy");
	Peon *joe = new Peon("Joe");
	std::cout << *robert << *jim << *joe;
	robert->polymorph(*jim);
	robert->polymorph(*joe);
	delete joe;
	delete jim;
	delete robert;

	Peon obj1("lowok");
	Peon obj(obj1);
	std::cout << obj1.getName() << std::endl;
	std::cout << obj.getName() << std::endl;
return 0;
}