#include <iostream>

 char *stringToUpper( char *s ) {
	for (int i = 0; s[i] != '\0'; ++i) {
		if ('a' <= s[i] && s[i] <= 'z') {
			s[i] -= 32;
		}
	}
	return s;
}

int main( int argc, char **argv ) {
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	int i = 1;
	while (i < argc) {
		std::cout << stringToUpper(argv[i]);
		++i;
	}
	std::cout << std::endl;
	return 0;
}