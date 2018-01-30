#include "Phonebook.class.hpp"
#include "Contact.class.hpp"
#include <iostream>
#include <iomanip>
#include <string>

Phonebook::Phonebook() {
	this->currentNumberOfContacts = 0;
}

void Phonebook::searchContacts() {
	std::string input;
	
	if (this->currentNumberOfContacts == 0) {
		std::cout << "The phonebook is empty" << std::endl;
		return;
	}

	std::cout << std::setw(10) << "Index" << '|';
	std::cout << std::setw(10) << "First Name" << '|';
	std::cout << std::setw(10) << "Last Name" << '|';
	std::cout << std::setw(10) << "Nickname" << '|';
	std::cout << std::endl;

	for (int i = 0; i < this->currentNumberOfContacts; ++i) {
		std::cout << std::setw(10) << i + 1 << '|';
		truncateAndAddPeriod(this->entries[i].getFirstName());
		truncateAndAddPeriod(this->entries[i].getLastName());
		truncateAndAddPeriod(this->entries[i].getNickname());
		std::cout << std::endl;
	}

	std::cout << "Enter the index of the user you want to look up: ";
	std::getline(std::cin, input);
	if (input.length() == 1 && '1' <= input[0] && input[0] <= '8') {
		int id = input[0] - 49;
		if (id + 1 > this->currentNumberOfContacts) {
			std::cout << "There is no such entry" << std::endl << std::endl;
		} else {
			std::cout << "First Name: " << this->entries[id].getFirstName() << std::endl;
			std::cout << "Last Name: " << this->entries[id].getLastName() << std::endl;
			std::cout << "Nickname: " << this->entries[id].getNickname() << std::endl;
			std::cout << "Login: " << this->entries[id].getLogin() << std::endl;
			std::cout << "Postal Address: " << this->entries[id].getPostalAddress() << std::endl;
			std::cout << "Email Address: " << this->entries[id].getEmailAddress() << std::endl;
			std::cout << "Phone Number: " << this->entries[id].getPhoneNumber() << std::endl;
			std::cout << "Birthday Date: " << this->entries[id].getBirthdayDate() << std::endl;
			std::cout << "Favorite Meal: " << this->entries[id].getFavoriteMeal() << std::endl;
			std::cout << "Underwear Color: " << this->entries[id].getUnderwearColor() << std::endl;
			std::cout << "Darkest Secret: " << this->entries[id].getDarkestSecret() << std::endl << std::endl;
		}
	} else {
		std::cout << "There is no such index" << std::endl << std::endl;
	}
}

void Phonebook::addContact() {
	if (currentNumberOfContacts < 8) {
		this->entries[this->currentNumberOfContacts].setFirstName();
		this->entries[this->currentNumberOfContacts].setLastName();
		this->entries[this->currentNumberOfContacts].setNickname();
		this->entries[this->currentNumberOfContacts].setLogin();
		this->entries[this->currentNumberOfContacts].setPostalAddress();
		this->entries[this->currentNumberOfContacts].setEmailAddress();
		this->entries[this->currentNumberOfContacts].setPhoneNumber();
		this->entries[this->currentNumberOfContacts].setBirthdayDate();
		this->entries[this->currentNumberOfContacts].setFavoriteMeal();
		this->entries[this->currentNumberOfContacts].setUnderwearColor();
		this->entries[this->currentNumberOfContacts].setDarkestSecret();
		this->currentNumberOfContacts += 1;
		std::cout << "The contact was successfully added" << std::endl << std::endl;
	} else {
		std::cout << "The phonbook is full. Try again later" << std::endl << std::endl;
	}
}

void Phonebook::truncateAndAddPeriod(std::string s) {
	if (s.length() > 10){
		s.resize(9);
		std::cout << std::setw(10) << s + '.' << '|';
	} else {
		std::cout << std::setw(10) << s << '|';
	}
}
