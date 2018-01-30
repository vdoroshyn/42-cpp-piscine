#ifndef PEON_HPP
#define PEON_HPP

#include <iostream>
#include "Victim.hpp"

class Peon : public Victim {
	public:
		Peon(std::string name);
		Peon(Peon const& src);
		virtual ~Peon();

		virtual void getPolymorphed() const;

		Peon& operator=(Peon const& rhs);
	protected:
	private:
		Peon();
};

std::ostream& operator<<(std::ostream& stream, Peon const& rhs);

#endif
