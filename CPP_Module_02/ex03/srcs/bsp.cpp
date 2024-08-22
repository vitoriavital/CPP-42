#include "../include/Point.hpp"
#include <cmath>

static Fixed	myAbs(Fixed n) {
	if (n < Fixed(0))
		n = n * -1;
	return n;
}

static Fixed	calculateArea(Point const a, Point const b, Point const c) {
	Fixed	x1 = a.getXValue();
	Fixed	x2 = b.getXValue();
	Fixed	x3 = c.getXValue();
	Fixed	y1 = a.getYValue();
	Fixed	y2 = b.getYValue();
	Fixed	y3 = c.getYValue();

	Fixed area = myAbs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / Fixed(2.0f);

	return area;
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	if (a == point || b == point || c == point)
		return false;
	Fixed	areaABC = calculateArea(a, b, c);
	Fixed	areaPBC = calculateArea(point, b, c);
	Fixed	areaAPC = calculateArea(a, point, c);
	Fixed	areaABP = calculateArea(a, b, point);

	if ((areaABP + areaPBC + areaAPC) == areaABC)
		return true;
	else
		return false;
}
