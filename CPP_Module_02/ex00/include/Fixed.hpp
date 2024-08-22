#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <string>

class Fixed {
	public:
		Fixed(void);
		Fixed(const Fixed &copy);
		Fixed &operator=(const Fixed &other);
		~Fixed(void);

		int					getRawBits(void)const;
		void				setRawBits(int const raw);

	private:
		int					_fixedPointValue;
		static const int	_fractBits;
};
#endif
