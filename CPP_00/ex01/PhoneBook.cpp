#include <iostream>
#include <string>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	this->_id = 0;
	return ;
}

PhoneBook::~PhoneBook(void) {
	return ;
}

Contact PhoneBook::getContact(int id)const {
	return this->_contacts[id];
}

void	PhoneBook::addContact(void) {
	std::string	content;
	const std::string RED = "\033[31m";
	const std::string RESET = "\033[0m";

	content = "";
	if (this->_id > 7)
	{
		std::cout << "This new contact will replace this contact:";
		std::cout << this->_contacts[this->_id % 8].getFirstName();
		std::cout << std::endl;
	}
	while (content == "")
	{
		std::cout << "Enter your first name: ";
		std::getline(std::cin, content);
		if (content != "")
			this->_contacts[this->_id % 8].setFirstName(content);
		else
			std::cout << RED << "First name can't be blank!" << RESET << std::endl;
	}
	content = "";
	while (content == "")
	{
		std::cout << "Enter your last name: ";
		std::getline(std::cin, content);
		if (content != "")
			this->_contacts[this->_id % 8].setLastName(content);
		else
			std::cout << RED << "Last name can't be blank!" << RESET << std::endl;
	}
	content = "";
	while (content == "")
	{
		std::cout << "Enter your nickname: ";
		std::getline(std::cin, content);
		if (content != "")
			this->_contacts[this->_id % 8].setNickname(content);
		else
			std::cout << RED << "Nickname can't be blank!" << RESET << std::endl;
	}
	content = "";
	while (content == "")
	{
		std::cout << "Enter your phone number: ";
		std::getline(std::cin, content);
		if (content != "")
			this->_contacts[this->_id % 8].setPhoneNumber(content);
		else
			std::cout << RED << "Phone number can't be blank!" << RESET << std::endl;
	}
	content = "";
	while (content == "")
	{
		std::cout << "Enter your darkest secret: ";
		std::getline(std::cin, content);
		if (content != "")
			this->_contacts[this->_id % 8].setSecret(content);
		else
			std::cout << RED << "Darkest secret can't be blank!" << RESET << std::endl;
	}
	this->_id++;
}

std::string	PhoneBook::fix_size(std::string str) {
	int			n;

	if (str.size() > 10)
	{
		str.resize(10);
		str[str.size() - 1] = '.';
	}
	n = 10 - str.size();
	while (n)
	{
		str.insert(0, " ");
		n--;
	}
	return str;
}

bool	PhoneBook::search_table(Contact contacts[8]) {
	int			i = 0;
	bool		found;
	std::string	str;
	std::string	index;
	char		id;

	found = false;
	std::cout << "------------Phone Book's Contact------------ " << std::endl;
	std::cout << " ------------------------------------------- " << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	while (i < 8)
	{
		if (contacts[i].getFirstName().size())
		{
			found = true;
			id = '1' + i;
			index = std::string(1, id);
			std::cout << "|" << this->fix_size(index) << str;
			std::cout << "|" << this->fix_size(contacts[i].getFirstName());
			std::cout << "|" << this->fix_size(contacts[i].getLastName());
			std::cout << "|" << this->fix_size(contacts[i].getNickname());
			std::cout << "|" << std::endl;
			if (i < 7 && contacts[i + 1].getFirstName().size())
				std::cout << "|----------|----------|----------|----------|" << std::endl;
		}
		i++;
	}
	std::cout << " ------------------------------------------- " << std::endl;
	return found;
}

void	PhoneBook::searchContact(void) {
	std::string	str;
	const std::string RED = "\033[31m";
	const std::string RESET = "\033[0m";

	if (this->search_table(this->_contacts) == false)
	{
		std::cout << std::endl << RED << "There are no saved contacts" << RESET << std::endl;
		return ;
	}
	while (!std::cin.eof())
	{
		std::cout << "Select an index: ";
		if (std::getline(std::cin, str) && str != "")
		{
			if (str.size() == 1 && str[0] >= '1' && str[0] <= '8' && \
					this->_contacts[str[0] - 1 - '0'].getFirstName().size())
				break ;
		}
		if (str != "")
			std::cout << RED << "Invalid index! Please choose a valid index!" << RESET << std::endl;
	}
	if (!std::cin.eof())
		this->printPhoneBookContact(this->_contacts[str[0] - 1 - '0']);
}

void	PhoneBook::printPhoneBookContact(Contact contact)const {
	std::cout << std::endl << "First Name: " << contact.getFirstName() << std::endl;
	std::cout << "Last Name: " << contact.getLastName() << std::endl;
	std::cout << "Nickname: " << contact.getNickname() << std::endl;
	std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << contact.getSecret() << std::endl;
}
