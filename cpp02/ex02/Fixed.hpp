/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlakhdar <zlakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 21:40:37 by zlakhdar          #+#    #+#             */
/*   Updated: 2024/12/06 22:58:03 by zlakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED
#define FIXED
#include <iostream>
#include <cmath>
class Fixed
{
	private:
		int	_fp_value;
		static const int _fract_bits;

	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed& copy);
		Fixed &operator=(const Fixed &src);
		Fixed(const int &integer);
		Fixed(const float& floatN);
		int getRawBits(void)const;
		float toFloat( void ) const;
		int toInt( void ) const;
		bool operator>(const Fixed &val)const;
		bool operator<(const Fixed &val)const;
		bool operator<=(const Fixed &val)const;
		bool operator>=(const Fixed &val)const;
		bool operator==(const Fixed &val)const;
		bool operator!=(const Fixed &val)const;
		Fixed operator+(const Fixed &val);
		Fixed operator-(const Fixed &val);
		Fixed operator*(const Fixed &val);
		Fixed operator/(const Fixed &val);
    	Fixed operator++(int);
    	Fixed operator++();
		Fixed operator--(int);
    	Fixed operator--();
		static Fixed& min(Fixed &a, Fixed &b);
		static const Fixed& min(const Fixed &a, const Fixed &b);
		static Fixed& max(Fixed &a, Fixed &b);
		static const Fixed& max(const Fixed &a, const Fixed &b);
};
std::ostream &operator<<(std::ostream& os, const Fixed &my_class);
#endif