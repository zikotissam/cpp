/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlakhdar <zlakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 21:42:27 by zlakhdar          #+#    #+#             */
/*   Updated: 2024/12/06 22:59:35 by zlakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"
const int Fixed:: _fract_bits = 8;
Fixed::Fixed(const int& integer): _fp_value(integer * (1 << _fract_bits))
{
    std::cout<<"Int constructor called"<<std::endl;
}
Fixed::Fixed(const float& floatN): _fp_value(floatN * (1 << _fract_bits))
{
    std::cout<<"Float constructor called"<<std::endl;
}
Fixed::Fixed(): _fp_value(0)
{
    std::cout<<"Default constructor called"<<std::endl;
}
Fixed::~Fixed(){
    std::cout<<"Destructor called"<<std::endl;
    
}
int Fixed::getRawBits(void)const{
    return(this->_fp_value);
}

Fixed::Fixed(const Fixed& copy){
    *this = copy;
    std::cout<<"Copy constructor called"<<std::endl;
}


float Fixed::toFloat( void ) const{
    return(float(_fp_value) / (1 << _fract_bits));
}
int Fixed::toInt( void )const{
    return(_fp_value / (1 << _fract_bits));
}

Fixed &Fixed::operator=(const Fixed &src){
    if(this != &src)
        this->_fp_value = src.getRawBits();
    std::cout<<"Copy assignment operator called"<<std::endl;
    return *this;
}


std::ostream &operator<<(std::ostream &os, const Fixed &my_class){
   
    os <<my_class.toFloat();
    return os;
}