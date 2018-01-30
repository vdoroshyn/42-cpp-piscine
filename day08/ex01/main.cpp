#include "span.hpp"

int main() {
	Span obj = Span(4);
	obj.addNumber(55);
	obj.addNumber(3);
	obj.addNumber(172);
	obj.addNumber(23);
	std::cout << obj.shortestSpan() << std::endl;
	std::cout << obj.longestSpan() << std::endl;

	std::cout << "*********************************************************************************" << std::endl;

	Span obj2 = Span(15000);

	try {
		for (int i = 0; i < 15002; ++i) {
			obj2.addNumber(i);
		}
	} catch (std::exception e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << obj2.shortestSpan() << std::endl;
	std::cout << obj2.longestSpan() << std::endl;

	return 0;
}