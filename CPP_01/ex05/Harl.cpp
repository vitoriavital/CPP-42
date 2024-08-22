#include <iostream>
#include "Harl.hpp"

Harl::Harl(void) {
	return ;
}

Harl::~Harl(void) {
	return ;
}

void	Harl::_debug(void) {
	std::cout << "[DEBUG] - ";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;

	return ;
}

void	Harl::_info(void) {
	std::cout << "[INFO] - ";
	std::cout << "I cannot believe adding extra bacon costs more money.";
	std::cout << " You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!";
	std::cout << std::endl;

	return ;
}

void	Harl::_warning(void) {
	std::cout << "[WARNING] - ";
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << " I’ve been coming for years whereas you started working here since last month.";
	std::cout << std::endl;

	return ;
}

void	Harl::_error(void) {
	std::cout << "[ERROR] - ";
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;

	return ;
}

void	Harl::complain(std::string level) {
	std::string	complains[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*levels[])( void ) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	bool		valid = false;

	for (int i = 0; i < 4; i++)
	{
		if (complains[i] == level)
		{
			(this->*levels[i])();
			valid = true;
		}
	}
	if (valid == false)
		std::cout << "Harl doesn't know the level: " << level << std::endl;
	return ;
}
