#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include <iostream>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle();
		PlasmaRifle(PlasmaRifle const& src);
		~PlasmaRifle();

		void attack() const;
		
		PlasmaRifle& operator=(PlasmaRifle const& rhs);
	protected:
	private:
};
#endif
