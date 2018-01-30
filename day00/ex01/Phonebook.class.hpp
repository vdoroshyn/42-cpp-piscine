#include "Contact.class.hpp"
#include <iostream>
#include <string>
#include <iomanip>

#ifndef PHONEBOOK_CLASS_H
#define PHONEBOOK_CLASS_H

class Phonebook {
	public:
		Phonebook();
		void addContact();
		void searchContacts();
	protected:
	private:
		Contact entries[8];
		int currentNumberOfContacts;
		void truncateAndAddPeriod(std::string s);
};

#endif
