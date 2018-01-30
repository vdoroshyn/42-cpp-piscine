#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer {
	public:
		Sorcerer(std::string name, std::string title);
		Sorcerer(Sorcerer const& src);
		~Sorcerer();

		std::string getName() const;
		std::string getTitle() const;

		void polymorph(Victim const & rhs) const;

		Sorcerer& operator=(Sorcerer const& rhs);
	protected:
	private:
		Sorcerer();

		std::string _name;
		std::string _title;
};

std::ostream& operator<<(std::ostream& stream, Sorcerer const& rhs);

#endif
