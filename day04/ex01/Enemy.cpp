#include "Enemy.hpp"

Enemy::Enemy() {
}

Enemy::Enemy(Enemy const& src) {
	*this = src;
}

Enemy::Enemy(int health, std::string const& type) : _type(type), _health(hp){
}

Enemy::~Enemy(){
}

std::string const& Enemy::getType() const{
	return this->_type;
}

int Enemy::getHP() const{
	return this->_health;
}

void Enemy::takeDamage(int damage){
	if (damage < 0 || this->_health == 0) {
		return;
	}
	if (this->getHP - damage <= 0)
		this->_health = 0;
	else
		this->_health -= damage;
}

Enemy& Enemy::operator=(Enemy const& src) {
	if (this != &src) {
		this->health = src.getHP();
	}
	return *this;
}
