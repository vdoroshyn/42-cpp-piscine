#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <iomanip>

void castedChar(char c, int intgr) {
	if (intgr < -128 || intgr > 127) {
		std::cout << "char: impossible" << std::endl;
		return;
	}
	if (!isprint(c)) {
		std::cout << "char: Non displayable" << std::endl;
	} else {
		std::cout << "char: \'" << c << "\'" << std::endl;
	}
}

int main(int ac, char *av[]) {
	if (ac != 2) {
		std::cout << "You should enter at least one argument" << std::endl;
		return 1;
	}
	double dbl = atof(av[1]);
	float flt = static_cast<float>(dbl);
	int intgr = static_cast<int>(dbl);
	char chr = static_cast<char>(dbl);

	if (isinf(dbl) || isnan(dbl)) {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
	} else if (strlen(av[1]) == 1 && !isdigit(av[1][0])) {
		std::cout << std::fixed;
		std::cout << "char: \'" << av[1][0] << "\'" << std::endl;
		std::cout << "int: " << std::setprecision(1) << static_cast<int>(av[1][0]) << std::endl;
		std::cout << "float: " << std::setprecision(1) << static_cast<float>(av[1][0]) << "f" << std::endl;
		std::cout << "double: " << std::setprecision(1) << static_cast<double>(av[1][0]) << std::endl;
		return (3);
	} else if (((av[1][0] == '+' || av[1][0] == '-') && isdigit(av[1][1])) || isdigit(av[1][0])) {
		castedChar(chr, intgr);
		std::cout << "int: " << intgr << std::endl;
	} else {
		std::cout << "incorrent input" << std::endl;
		return (2);
	}
	std::cout << std::fixed;
	std::cout << "float: " << std::setprecision(1) << flt << "f" << std::endl;
	std::cout << "double: " << std::setprecision(1) << dbl << std::endl;
	return 0;
}
