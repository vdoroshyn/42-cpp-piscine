#include <iostream>
#include <string>

#ifndef CONTACT_CLASS_H
#define CONTACT_CLASS_H

class Contact {
	public:
		Contact();
		std::string getFirstName();
		std::string getLastName();
		std::string getNickname();
		std::string getLogin();
		std::string getPostalAddress();
		std::string getEmailAddress();
		std::string getPhoneNumber();
		std::string getBirthdayDate();
		std::string getFavoriteMeal();
		std::string getUnderwearColor();
		std::string getDarkestSecret();
		void setFirstName();
		void setLastName();
		void setNickname();
		void setLogin();
		void setPostalAddress();
		void setEmailAddress();
		void setPhoneNumber();
		void setBirthdayDate();
		void setFavoriteMeal();
		void setUnderwearColor();
		void setDarkestSecret();
	protected:
	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string login;
		std::string postalAddress;
		std::string emailAddress;
		std::string phoneNumber;
		std::string birthdayDate;
		std::string favoriteMeal;
		std::string underwearColor;
		std::string darkestSecret;
};

#endif
