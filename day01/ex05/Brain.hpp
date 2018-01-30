#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {

	public:
		Brain(int weight, int age);
		~Brain();
		std::string identify() const;
		int _weight;
		int _age;
	protected:
	private:
};

#endif
