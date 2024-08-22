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
		Fixed &operator=(const Fixed &other);
		~Fixed(void);

		int					getRawBits(void)const;
		void				setRawBits(int const raw);
		float				toFloat(void)const;
		int					toInt(void)const;

	private:
		int					_fixedPointValue;
		static const int	_fractBits;
};
std::ostream &operator<<(std::ostream &out, const Fixed& fixed);

#endif
