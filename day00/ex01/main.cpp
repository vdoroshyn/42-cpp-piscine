#include "Phonebook.class.hpp"
#include "Contact.class.hpp"
#include <string>
#include <iostream>
#include <iomanip>

int main( void )
{
	Phonebook phonebook;
	std::string input;

	while (!std::cin.eof())
	{
		std::cout << "Enter a command (ADD SEARCH EXIT)" << std::endl;
		std::getline (std::cin, input);
		if (input == "ADD")
			phonebook.addContact();
		else if (input == "SEARCH")
			phonebook.searchContacts();
		else if (input == "EXIT")
			break;
		else
			std::cout << "The allowed commands are ADD SEARCH and EXIT" << std::endl << std::endl;
	}
	return 0;
}
