#include "phonebook.h"

PhoneBook::PhoneBook() : idx(0), num(0) {}

void	PhoneBook::AddContact(void)
{
	std::string	input;

	std::cout << "Input first name : ";
	std::cin >> input;
	contacts[idx].SetFirstName(input);
	std::cout << "Input last name : ";
	std::cin >> input;
	contacts[idx].SetLastName(input);
	std::cout << "Input nickname : ";
	std::cin >> input;
	contacts[idx].SetNickname(input);
	std::cout << "Input phone number : ";
	std::cin >> input;
	contacts[idx].SetPhoneNumber(input);
	std::cout << "Input darkest secret : ";
	std::cin >> input;
	contacts[idx].SetDarkestSecret(input);
	std::cout << "Add contact complete." << std::endl;

	idx = idx != 7 ? idx + 1 : 0;
	num = num != 8 ? num + 1 : num;
}

void	PhoneBook::DisplayContactForm(std::string str, bool end)
{
	if (str.length() <= 10)
		std::cout << std::setw(10) << str;
	else
	{
		for (int i = 0; i < 9; i++)
			std::cout << str[i];
		std::cout << ".";
	}
	if (end == true)
		std::cout << "|" << std::endl;
	else
		std::cout << "|";
}

void	PhoneBook::DisplayAllContacts(void)
{
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	for (int i = 0; i < num; i++)
	{
		std::cout << "|" << std::setw(10) << i << "|";
		DisplayContactForm(contacts[i].GetFirstName(), false);
		DisplayContactForm(contacts[i].GetLastName(), false);
		DisplayContactForm(contacts[i].GetNickname(), true);
	}
}

void	PhoneBook::DisplayOneContact(void)
{
	std::string	input;
	int			idx;

	std::cout << "Input contact index number : ";
	std::cin >> input;
	if (std::cin.fail())
		exit(1);
	std::stringstream(input) >> idx;
	if (input != "0" && (atoi(input.c_str()) == 0 || idx < 0 || idx > 9))
		std::cout << "Error : Wrong input!" << std::endl;
	else if (idx < 0 || idx > 7)
		std::cout << "Error : Wrong index number!" << std::endl;
	else if (idx >= num)
		std::cout << "Error : Empty index!" << std::endl;
	else
	{
		std::cout << "First name : " << contacts[idx].GetFirstName() << std::endl;
		std::cout << "Last name : " << contacts[idx].GetLastName() << std::endl;
		std::cout << "Nick name : " << contacts[idx].GetNickname() << std::endl;
		std::cout << "Phone number : " << contacts[idx].GetPhoneNumber() << std::endl;
		std::cout << "Darkest secret : " << contacts[idx].GetDarkestSecret() << std::endl;
	}
}
