#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <string>

class Fixed {
	public:
		Fixed(void);
		Fixed(const int n);
		Fixed(const float f);
		Fixed(const Fixed &copy);
		~Fixed(void);
		Fixed				&operator=(const Fixed &other);

		bool				operator>(Fixed fixed)const;
		bool				operator<(Fixed fixed)const;
		bool				operator>=(Fixed fixed)const;
		bool				operator<=(Fixed fixed)const;
		bool				operator==(Fixed fixed)const;
		bool				operator!=(Fixed fixed)const;

		Fixed				operator+(Fixed fixed)const;
		Fixed				operator-(Fixed fixed)const;
		Fixed				operator*(Fixed fixed)const;
		Fixed				operator/(Fixed fixed)const;

		Fixed				operator++(int);
		Fixed				operator--(int);
		Fixed				operator++(void);
		Fixed				operator--(void);

		int					getRawBits(void)const;
		void				setRawBits(int const raw);
		float				toFloat(void)const;
		int					toInt(void)const;
		static Fixed		&min(Fixed &n1, Fixed &n2);
		static const Fixed	&min(const Fixed &n1, const Fixed &n2);
		static Fixed		&max(Fixed &n1, Fixed &n2);
		static const Fixed	&max(const Fixed &n1, const Fixed &n2);

	private:
		int					_fixedPointValue;
		static const int	_fractBits;
};
std::ostream &operator<<(std::ostream &out, const Fixed& fixed);

#endif
