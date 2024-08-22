#include "../include/Fixed.hpp"
#include "../include/Point.hpp"
#include <iostream>
bool bsp(Point const a, Point const b, Point const c, Point const point);

int main( void ) {
	const Point a;
	const Point b(10, 0);
	const Point c(0, 10);
	const Point point1(5, 5);

	std::cout << "------------------ The point to be checked is : X=5 Y=5 (TRUE)------------------" << std::endl;
	std::cout << "Vertice A: X=0 Y=0" << std::endl;
	std::cout << "Vertice B: X=10 Y=0" << std::endl;
	std::cout << "Vertice C: X=0 Y=10" << std::endl;
	if (bsp(a, b, c, point1) == true)
		std::cout << "Result = TRUE" << std::endl;
	else
		std::cout << "Result = FALSE" << std::endl;

	const Point point2(11, 5);

	std::cout << "------------------ The point to be checked is : X=11 Y=5 (FALSE)------------------" << std::endl;
	std::cout << "Vertice A: X=0 Y=0" << std::endl;
	std::cout << "Vertice B: X=10 Y=0" << std::endl;
	std::cout << "Vertice C: X=0 Y=10" << std::endl;
	if (bsp(a, b, c, point2) == true)
		std::cout << "Result = TRUE" << std::endl;
	else
		std::cout << "Result = FALSE" << std::endl;

	Point a1(1, 1);
	Point b1(5, 1);
	Point c1(3, 4);
	Point point3(3, 2);

	std::cout << "------------------ The point to be checked is : X=1 Y=1 (TRUE)------------------" << std::endl;
	std::cout << "Vertice A: X=5 Y=1" << std::endl;
	std::cout << "Vertice B: X=3 Y=4" << std::endl;
	std::cout << "Vertice C: X=2 Y=2" << std::endl;
	if (bsp(a, b, c, point3) == true)
		std::cout << "Result = TRUE" << std::endl;
	else
		std::cout << "Result = FALSE" << std::endl;

	Point point4(6, 5);
	std::cout << "------------------ The point to be checked is : X=6 Y=5 (FALSE)------------------" << std::endl;
	std::cout << "Vertice A: X=5 Y=1" << std::endl;
	std::cout << "Vertice B: X=3 Y=4" << std::endl;
	std::cout << "Vertice C: X=2 Y=2" << std::endl;
	if (bsp(a, b, c, point4) == true)
		std::cout << "Result = TRUE" << std::endl;
	else
		std::cout << "Result = FALSE" << std::endl;


	std::cout << "------------------ Additional Tests------------------" << std::endl;
	Point a2(6, 6);
	Point b2(4, 3);
	Point c2(8, 5);
	Point point5(6, 5);

	std::cout << "------------------ The point to be checked is : X=" << point5.getXValue() << " Y=" << point5.getYValue() << "------------------" << std::endl;
	std::cout << "Vertice A: X=" << a2.getXValue() << " Y=" << a2.getYValue() << std::endl;
	std::cout << "Vertice B: X=" << b2.getXValue() << " Y=" << b2.getYValue() << std::endl;
	std::cout << "Vertice C: X=" << c2.getXValue() << " Y=" << c2.getYValue() << std::endl;
	if (bsp(a2, b2, c2, point5) == true)
		std::cout << "Result = TRUE" << std::endl;
	else
		std::cout << "Result = FALSE" << std::endl;

	return 0;
}
