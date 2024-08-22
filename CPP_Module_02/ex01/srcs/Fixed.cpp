#include "../include/Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
	this->_fixedPointValue = 0;

	return ;
}

Fixed::Fixed(const int n) {
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointValue = n << Fixed::_fractBits;

	return ;
}

Fixed::Fixed(const float f) {
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPointValue = roundf(f * (1 << Fixed::_fractBits));

	return ;
}

Fixed::Fixed(const Fixed &copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;

	return ;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;

	return ;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_fixedPointValue = other.getRawBits();

	return *this;
}

int	Fixed::getRawBits(void)const {
	return this->_fixedPointValue;
}

void	Fixed::setRawBits(int const raw) {
	this->_fixedPointValue = raw;

	return ;
}

float	Fixed::toFloat(void)const {
	float floatValue = static_cast<float>(this->_fixedPointValue) / static_cast<float>(1 << Fixed::_fractBits);

	return floatValue;
}

int	Fixed::toInt(void)const {
	return this->_fixedPointValue >> Fixed::_fractBits;
}

std::ostream	&operator<<(std::ostream& out, const Fixed& fixed) {
	float value = fixed.toFloat();
	out << value;
	return out;
}

const int	Fixed::_fractBits = 8;
