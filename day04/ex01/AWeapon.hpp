#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>

class AWeapon
{
	public:
		AWeapon(AWeapon const& src);
		AWeapon(std::string const& name, int apcost, int damage);
		virtual ~AWeapon();

		std::string const& getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;

		AWeapon& operator=(AWeapon const& rhs);
	protected:
		std::string	_name;
		int _apcost;
		int _damage;
	private:
		AWeapon();
};
#endif
