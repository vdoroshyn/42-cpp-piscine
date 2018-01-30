#include "Contact.class.hpp"

Contact::Contact() {
}

std::string Contact::getFirstName() {
	return this->firstName;
}

std::string Contact::getLastName() {
	return this->lastName;
}

std::string Contact::getNickname() {
	return this->nickname;
}

std::string Contact::getLogin() {
	return this->login;
}

std::string Contact::getPostalAddress() {
	return this->postalAddress;
}

std::string Contact::getEmailAddress() {
	return this->emailAddress;
}

std::string Contact::getPhoneNumber() {
	return this->phoneNumber;
}

std::string Contact::getBirthdayDate() {
	return this->birthdayDate;
}

std::string Contact::getFavoriteMeal() {
	return this->favoriteMeal;
}

std::string Contact::getUnderwearColor() {
	return this->underwearColor;
}

std::string Contact::getDarkestSecret() {
	return this->darkestSecret;
}

void Contact::setFirstName() {
	std::cout << "Enter your first name: ";
	std::getline(std::cin, this->firstName);
}

void Contact::setLastName() {
	std::cout << "Enter your last name: ";
	std::getline(std::cin, this->lastName);
}

void Contact::setNickname() {
	std::cout << "Enter your nickname: ";
	std::getline(std::cin, this->nickname);
}

void Contact::setLogin() {
	std::cout << "Enter your login: ";
	std::getline(std::cin, this->login);
}

void Contact::setPostalAddress() {
	std::cout << "Enter your postal address: ";
	std::getline(std::cin, this->postalAddress);
}

void Contact::setEmailAddress() {
	std::cout << "Enter your email address: ";
	std::getline(std::cin, this->emailAddress);
}

void Contact::setPhoneNumber() {
	std::cout << "Enter your phone number: ";
	std::getline(std::cin, this->phoneNumber);
}

void Contact::setBirthdayDate() {
	std::cout << "Enter your birthday date: ";
	std::getline(std::cin, this->birthdayDate);
}

void Contact::setFavoriteMeal() {
	std::cout << "Enter your favorite meal: ";
	std::getline(std::cin, this->favoriteMeal);
}

void Contact::setUnderwearColor() {
	std::cout << "Enter the color of your underwear: ";
	std::getline(std::cin, this->underwearColor);
}

void Contact::setDarkestSecret() {
	std::cout << "Enter your darkest secret: ";
	std::getline(std::cin, this->darkestSecret);
}
