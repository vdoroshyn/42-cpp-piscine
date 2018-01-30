#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	public:
		Fixed();
		Fixed(Fixed const& src);
		Fixed(const int num);
		Fixed(const float num);
		~Fixed();

		Fixed& operator=(Fixed const& rhs);

		int getRawBits() const;
		void setRawBits(int const raw);
		float toFloat() const;
		int toInt() const;
	protected:
	private:
		int _rawBits;
		static const int _numberOfFractBits = 8;

};

std::ostream& operator<<(std::ostream& stream, Fixed const& rhs);

#endif
