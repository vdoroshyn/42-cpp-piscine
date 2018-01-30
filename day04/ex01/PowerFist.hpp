#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include <iostream>
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
		PowerFist();
		PowerFist(PowerFist const& src);
		~PowerFist();

		void attack() const;
		
		PowerFist& operator=(PowerFist const& rhs);
	protected:
	private:
};
#endif
