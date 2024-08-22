#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

#include "Contact.hpp"

class PhoneBook {
	public:
		PhoneBook(void);
		~PhoneBook(void);

		void		addContact(void);
		void		searchContact(void);
		void		printPhoneBookContact(Contact contact)const;
		Contact		getContact(int id)const;
		std::string	fix_size(std::string str);
		bool		search_table(Contact contacts[8]);

	private:
		Contact		_contacts[8];
		int			_id;
};

#endif
