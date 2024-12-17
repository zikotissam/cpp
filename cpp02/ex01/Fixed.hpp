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

<<<<<<< HEAD

#ifndef FIXED
#define FIXED
#include <iostream>
class Fixed
{
	private:
		int	_fp_value;
		static const int _fract_bits;

	public:
		Fixed();
		Fixed(const int &integer);
		Fixed(const float& floatN);
		Fixed(const Fixed& copy);
		~Fixed();

		float toFloat( void ) const;
		int toInt( void ) const;
		Fixed &operator<<(void);
};
#endif
=======

#ifndef FIXED
#define FIXED
#include <iostream>
class Fixed
{
	private:
		int	_fp_value;
		static const int _fract_bits;

	public:
		Fixed();
		Fixed(const int &integer);
		Fixed(const float& floatN);
		Fixed(const Fixed& copy);
		~Fixed();
		int getRawBits(void)const;
		float toFloat( void ) const;
		int toInt( void ) const;
};
std::ostream &operator<<(std::ostream& os, const Fixed &my_class);
#endif
>>>>>>> 38b0d293d635fd9b858410e5675672b352b56645