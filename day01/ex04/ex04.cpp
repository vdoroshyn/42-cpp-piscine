#include <string>
#include <iostream>

int main() {
	std::string s = "HI THIS IS BRAIN";
	std::string* sPointer = &s;
	std::string& sReference = s;

	std::cout << "pointer display: " << *sPointer << std::endl;
	std::cout << "reference display: " << sReference << std::endl;
	
	return 0;
}
