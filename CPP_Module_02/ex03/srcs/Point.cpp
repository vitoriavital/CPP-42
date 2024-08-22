#include "../include/Point.hpp"
#include "../include/Fixed.hpp"
#include <iostream>
#include <cmath>

Point::Point(void) : _x(0), _y(0) {
	return ;
}

Point::Point(const float x, const float y) : _x(x), _y(y) {
	return ;
}

Point::Point(const Point &copy) : _x(copy._x), _y(copy._y) {
	return ;
}

Point::~Point(void) {
	return ;
}

const Fixed	&Point::getXValue(void)const {
	return this->_x;
}

const Fixed	&Point::getYValue(void)const {
	return this->_y;
}

Point &Point::operator=(const Point &other) {
	if (this != &other)
		return *this;

	return *this;
}

bool	Point::operator==(const Point &point)const {
	if (this->_x != point.getXValue())
		return false;
	if (this->_y != point.getYValue())
		return false;

	return true;
}
