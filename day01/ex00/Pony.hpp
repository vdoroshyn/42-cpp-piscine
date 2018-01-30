#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>

class Pony {
	public:
		Pony(std::string);
		~Pony();
		void makeSounds();
		void poop();
	protected:
	private:
		std::string name;
};

#endif
