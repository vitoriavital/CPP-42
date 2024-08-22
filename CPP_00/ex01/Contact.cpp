#include <iostream>
#include "Contact.hpp"

Contact::Contact(void) {
	return ;
}

Contact::~Contact(void) {
	return ;
}

std::string Contact::getFirstName(void)const {
	return this->_firstName;
}

std::string Contact::getLastName(void)const {
	return this->_lastName;
}

std::string Contact::getNickname(void)const {
	return this->_nickname;
}

std::string Contact::getPhoneNumber(void)const {
	return this->_phoneNumber;
}

std::string Contact::getSecret(void)const {
	return this->_secret;
}

void Contact::setFirstName(std::string name) {
	this->_firstName = name;
}

void Contact::setLastName(std::string name) {
	this->_lastName = name;
}

void Contact::setNickname(std::string name) {
	this->_nickname = name;
}

void Contact::setPhoneNumber(std::string number) {
	this->_phoneNumber = number;
}

void Contact::setSecret(std::string secret) {
	this->_secret = secret;
}
