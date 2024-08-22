#ifndef POINT_H
# define POINT_H

#include "Fixed.hpp"
#include <iostream>
#include <string>

class Point {
	public:
		Point(void);
		Point(const float x, const float y);
		Point(const Point &copy);
		~Point(void);
		Point			&operator=(const Point &other);
		bool			operator==(const Point &point)const;

		const Fixed		&getXValue(void)const;
		const Fixed		&getYValue(void)const;
	private:
		const Fixed		_x;
		const Fixed		_y;

};

#endif
