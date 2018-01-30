#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>

class Victim {
	public:
		Victim(std::string name);
		Victim(Victim const& src);
		virtual ~Victim();

		std::string getName() const;

		virtual void getPolymorphed() const;

		Victim& operator=(Victim const& rhs);
	protected:
		std::string _name;
		Victim();
	private:
};

std::ostream& operator<<(std::ostream& stream, Victim const& rhs);

#endif
