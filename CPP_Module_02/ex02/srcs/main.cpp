#include "../include/Fixed.hpp"
#include <iostream>

int main( void ) {
	Fixed		a;
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << "------- Additional Tests -------" << std::endl;
	Fixed		n1;
	Fixed		n2(10);
	Fixed		n3(3.49843f);
	Fixed const	n4(4.4f);
	Fixed const	n5(2.4f);

	std::cout << "--------- = operator ---------" << std::endl;
	std::cout << "Before: " << n1 << std::endl;
	n1 = n2;
	std::cout << "Before: " << n1 << std::endl;

	std::cout << "--------- > operator ---------" << std::endl;
	std::cout << "1 = True | 0 = False" << std::endl;
	std::cout << n4 << " > " << n3 << std::endl;
	std::cout << "Result: " << (n4 > n3) << std::endl;

	std::cout << "--------- < operator ---------" << std::endl;
	std::cout << "1 = True | 0 = False" << std::endl;
	std::cout << n1 << " < " << n4 << std::endl;
	std::cout << "Result: " << (n1 < n4) << std::endl;

	std::cout << "--------- >= operator --------" << std::endl;
	std::cout << "1 = True | 0 = False" << std::endl;
	std::cout << n3 << " >= " << n2 << std::endl;
	std::cout << "Result: " << (n3 >= n2) << std::endl;

	std::cout << "--------- <= operator --------" << std::endl;
	std::cout << "1 = True | 0 = False" << std::endl;
	std::cout << n1 << " <= " << n4 << std::endl;
	std::cout << "Result: " << (n1 <= n4) << std::endl;

	std::cout << "--------- == operator --------" << std::endl;
	std::cout << "1 = True | 0 = False" << std::endl;
	std::cout << n3 << " == " << n2 << std::endl;
	std::cout << "Result: " << (n3 == n2) << std::endl;

	std::cout << "--------- != operator --------" << std::endl;
	std::cout << "1 = True | 0 = False" << std::endl;
	std::cout << n1 << " != " << n4 << std::endl;
	std::cout << "Result: " << (n1 != n4) << std::endl;

	std::cout << "--------- + operator ---------" << std::endl;
	std::cout << n3 << " + " << n4 << " = " << (n3 + n4) << std::endl;

	std::cout << "--------- - operator ---------" << std::endl;
	std::cout << n1 << " - " << n2 << " = " << (n1 - n2) << std::endl;

	std::cout << "--------- * operator ---------" << std::endl;
	std::cout << n4 << " * " << n2 << " = " << (n4 * n2) << std::endl;

	std::cout << "--------- / operator ---------" << std::endl;
	std::cout << n3 << " / " << n2 << " = " << (n3 / n2) << std::endl;

	std::cout << "--------- ++ (pre-increment) operator ---------" << std::endl;
	std::cout << "Before: " << n1 << std::endl;
	std::cout << "After: "<< (++n1) << std::endl;

	std::cout << "--------- ++ (post-increment) operator ---------" << std::endl;
	std::cout << "Before: " << n2 << std::endl;
	std::cout << "After: "<< (n2++) << std::endl;

	std::cout << "--------- -- (pre-decrement) operator ---------" << std::endl;
	std::cout << "Before: " << n1 << std::endl;
	std::cout << "After: " << (--n1) << std::endl;

	std::cout << "--------- -- (post-decrement) operator ---------" << std::endl;
	std::cout << "Before: " << n3 << std::endl;
	std::cout << "After: " << (n3--) << std::endl;

	std::cout << "--------- getRawBits ---------" << std::endl;
	std::cout << n1.getRawBits() << std::endl;

	std::cout << "--------- setRawBits ---------" << std::endl;
	std::cout << "Before: " << n2 << std::endl;
	n2.setRawBits(256);
	std::cout << "After: "<< (n2++) << std::endl;

	std::cout << "--------- toFloat ---------" << std::endl;
	std::cout << n1 << std::endl;
	std::cout << n1.toFloat() << std::endl;

	std::cout << "--------- toInt ---------" << std::endl;
	std::cout << n2 << std::endl;
	std::cout << n2.toInt() << std::endl;

	std::cout << "--------- min const ---------" << std::endl;
	std::cout << "first " << n4 << " | second " << n5 << std::endl;
	std::cout << "MIN: " << Fixed::min(n4, n5) << std::endl;

	std::cout << "--------- min ---------" << std::endl;
	std::cout << "first " << n1 << " | second " << n2 << std::endl;
	std::cout << "MIN: " << Fixed::min(n1, n2) << std::endl;

	std::cout << "--------- max const ---------" << std::endl;
	std::cout << "first " << n4 << " | second " << n5 << std::endl;
	std::cout << "MAX: " << Fixed::max(n4, n5) << std::endl;

	std::cout << "--------- max ---------" << std::endl;
	std::cout << "first " << n1 << " | second " << n2<< std::endl;
	std::cout << "MAX: "<< Fixed::max(n1, n2) << std::endl;

	return 0;
}
