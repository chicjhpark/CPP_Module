#ifndef __CONTACT_H__
#define __CONTACT_H__

#include <iostream>

class Contact
{
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	phoneNumber;
		std::string	darkestSecret;
	public:
		Contact();
		std::string	GetFirstName();
		std::string	GetLastName();
		std::string	GetNickname();
		std::string	GetPhoneNumber();
		std::string	GetDarkestSecret();
		void		SetFirstName(std::string str);
		void		SetLastName(std::string str);
		void		SetNickname(std::string str);
		void		SetPhoneNumber(std::string str);
		void		SetDarkestSecret(std::string str);
};

#endif
