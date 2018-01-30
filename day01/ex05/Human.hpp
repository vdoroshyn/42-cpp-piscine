#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"
#include <iostream>

class Human {

	public:
		Human();
		~Human();
		Brain const& getBrain();
		std::string	identify();
		Brain const newBrain;
	protected:
	private:
};

#endif
