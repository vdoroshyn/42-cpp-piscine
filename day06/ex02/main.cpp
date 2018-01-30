#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <iostream>

Base* generate() {
	int rand = std::rand() % 3;
	switch(rand) {
		case(0):
			return new A();
		case(1):
			return new B();
		case(2):
			return new C();
		default:
			return NULL;
	}
}

void identify_from_pointer(Base* p) {
	A* tempA = dynamic_cast<A*>(p);
	if (tempA != NULL) {
		std::cout << "A" << std::endl;
		return;
	}

	B* tempB = dynamic_cast<B*>(p);
	if (tempB != NULL) {
		std::cout << "B" << std::endl;
		return;
	}

	C* tempC = dynamic_cast<C*>(p);
	if (tempC != NULL) {
		std::cout << "C" << std::endl;
		return;
	}
}

void identify_from_reference(Base& p) {
	if (dynamic_cast<A*>(&p) != NULL) {
		std::cout << "A" << std::endl;
		return;
	}

	if (dynamic_cast<B*>(&p) != NULL) {
		std::cout << "B" << std::endl;
		return;
	}

	if (dynamic_cast<C*>(&p) != NULL) {
		std::cout << "C" << std::endl;
		return;
	}
}

int main() {
	std::srand(std::time(0));

	Base* ptr = generate();
	identify_from_pointer(ptr);
	identify_from_reference(*ptr);
	delete ptr;
	return 0;
}
