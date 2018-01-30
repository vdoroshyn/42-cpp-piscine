#include <iostream>
#include "Character.hpp"

Character::Character(std::string const& name) : _name(name), _weapon(NULL), _actionPoints(40){
}

Character::Character() {
}

Character::Character(Character const& src) {
	*this = src;
}

Character::~Character(){
}

Character& Character::operator=(Character const& src){
	if (this != &src) {
		this->actionPoints = src.getAP();
		this->_weapon = src.getWeapon();
	}
	return *this;
}

//methods

void Character::recoverAP(){
	if (this->actionPoints + 10 > 40) {
		this->actionPoints = 40;
	} else {
		this->actionPoints += 10;
	}
}

void Character::equip(AWeapon* weapon){
	this->_weapon = weapon;
}

void Character::attack(Enemy* enemy){
	if (this->_actionPoints >= this->_weapon->getAPCost())
	{
		this->_actionPoints -= this->_weapon->getAPCost();
		enemy->takeDamage(this->_weapon->getDamage());
		std::cout << this->getName() << " attacks " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
		if (enemy->getHP() == 0)
			delete enemy;
	}
}

//getting

std::string const&	Character::getName() const{
	return this->_name;
}

int Character::getAP() const{
	return this->actionPoints;
}

AWeapon* Character::getWeapon() const{
	return this->_weapon;
}

//operators

std::ostream& operator<<(std::ostream& stream, Character const& src) {
	if (!src.getWeapon()) {
		o << src.getName()<< " has "<< src.getAP() <<" AP and is unarmed" << std::endl;
	} else {
		o << src.getName()<< " has "<< src.getAP() <<" AP and wields a " << src.getWeapon()->getName() << std::endl;
	} 
	return stream;
}
