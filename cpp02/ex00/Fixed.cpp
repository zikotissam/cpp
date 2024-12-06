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
Fixed::Fixed(): _fp_value(0)
{
    std::cout<<"Default constructor called"<<std::endl;
}
Fixed::~Fixed(){
    std::cout<<"Destructor called"<<std::endl;
    
}

Fixed::Fixed(const Fixed& copy){
    *this = copy;
    std::cout<<"Copy constructor called"<<std::endl;
}

int Fixed::getRawBits(void)const{
    std::cout<<"getRawBits member function called"<<std::endl;
    return(this->_fp_value);
}

void Fixed::setRawBits(int const raw)
{
    this->_fp_value = raw;
    std::cout<<"SetRawBits member function called"<<std::endl;
}

Fixed &Fixed::operator=(const Fixed &src){
    if(this != &src)
        this->_fp_value = src.getRawBits();
    std::cout<<"Copy assignment operator called"<<std::endl;
    return *this;
}


