#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
	public:
		Character(std::string const & name);
		Character(Character const &);
		~Character();

		void recoverAP();
		void equip(AWeapon* weapon);
		void attack(Enemy* target);

		std::string const& getName() const;
		int getAP() const;
		AWeapon* getWeapon()const;

		Character & operator=(Character const &);
	protected:
	private:
		Character();

		std::string const _name;
		AWeapon* _weapon;
		int _actionPoints;
};

std::ostream& operator<<(std::ostream & stream, Character const& src);

#endif
