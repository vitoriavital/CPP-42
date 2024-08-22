#include "../include/Fixed.hpp"
#include <iostream>

int	main( void ) {
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	a = Fixed( 1234.4321f );

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	// std::cout << "------- Additional Tests -------" << std::endl;

	// std::cout << "Issues with floating-point numbers" << std::endl;
	// std::cout << (1e6f + 1.0f) << std::endl;
	// std::cout << (1.0f - 0.999999f) << std::endl;

	// float sum = 0.0f;
	// for (int i = 0; i < 1000000; ++i)
	// 	sum += 0.000001f;
	// float expected = 1.0f;

	// std::cout << "1 = True | 0 = False" << std::endl;
	// std::cout << (sum == expected) << std::endl;
	// std::cout << "sum: " << sum << " | expected: " << expected << std::endl;

	return 0;
}
