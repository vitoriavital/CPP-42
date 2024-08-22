#include "../include/Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void) {
	this->_fixedPointValue = 0;

	return ;
}

Fixed::Fixed(const int n) {
	this->_fixedPointValue = n << Fixed::_fractBits;

	return ;
}

Fixed::Fixed(const float f) {
	this->_fixedPointValue = roundf(f * (1 << Fixed::_fractBits));

	return ;
}

Fixed::Fixed(const Fixed &copy) {
	*this = copy;

	return ;
}

Fixed::~Fixed(void) {
	return ;
}

Fixed &Fixed::operator=(const Fixed &other) {
	if (this != &other)
		this->_fixedPointValue = other._fixedPointValue;

	return *this;
}

bool Fixed::operator>(Fixed fixed)const {
	return this->_fixedPointValue > fixed.getRawBits();
}

bool Fixed::operator<(Fixed fixed)const{
	return this->_fixedPointValue < fixed.getRawBits();
}

bool Fixed::operator>=(Fixed fixed)const {
	return this->_fixedPointValue >= fixed.getRawBits();
}

bool Fixed::operator<=(Fixed fixed)const {
	return this->_fixedPointValue <= fixed.getRawBits();
}

bool Fixed::operator==(Fixed fixed)const {
	return this->_fixedPointValue == fixed.getRawBits();
}

bool Fixed::operator!=(Fixed fixed)const {
	return this->_fixedPointValue != fixed.getRawBits();
}

Fixed	Fixed::operator+(Fixed fixed)const {
	float	n1 = this->toFloat();
	float	n2 = fixed.toFloat();

	return n1 + n2;
}

Fixed	Fixed::operator-(Fixed fixed)const {
	float	n1 = this->toFloat();
	float	n2 = fixed.toFloat();

	return n1 - n2;
}

Fixed	Fixed::operator*(Fixed fixed)const {
	float	n1 = this->toFloat();
	float	n2 = fixed.toFloat();

	return n1 * n2;
}

Fixed	Fixed::operator/(Fixed fixed)const {
	float	n2 = fixed.toFloat();

	if (n2 == 0.0f)
	{
		std::cout << "Cannot divide by 0" << std::endl;
		return 0.0f;
	}
	float	n1 = this->toFloat();

	return n1 / n2;
}

Fixed	Fixed::operator++(void) {
	this->_fixedPointValue++;
	return *this;
}

Fixed	Fixed::operator--(void) {
	this->_fixedPointValue--;
	return *this;
}

Fixed	Fixed::operator++(int) {
	Fixed	initial = *this;

	++this->_fixedPointValue;

	return initial;
}

Fixed	Fixed::operator--(int){
	Fixed	initial = *this;

	--this->_fixedPointValue;

	return initial;
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

Fixed	&Fixed::min(Fixed &n1, Fixed &n2) {
	if (n1 < n2)
		return n1;
	else
		return n2;
}

const Fixed	&Fixed::min(const Fixed &n1, const Fixed &n2) {
	if (n1 < n2)
		return n1;
	else
		return n2;
}

Fixed	&Fixed::max(Fixed &n1, Fixed &n2) {
	if (n1 > n2)
		return n1;
	else
		return n2;
}

const Fixed	&Fixed::max(const Fixed &n1, const Fixed &n2) {
	if (n1 > n2)
		return n1;
	else
		return n2;
}

const int	Fixed::_fractBits = 8;
