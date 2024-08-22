#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <string>

class Contact {
	public:
		Contact(void);
		~Contact(void);

		std::string	getFirstName(void)const;
		std::string	getLastName(void)const;
		std::string	getNickname(void)const;
		std::string	getPhoneNumber(void)const;
		std::string	getSecret(void)const;
		void		setFirstName(std::string name);
		void		setLastName(std::string name);
		void		setNickname(std::string name);
		void		setPhoneNumber(std::string number);
		void		setSecret(std::string secret);

	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_secret;
};

#endif
