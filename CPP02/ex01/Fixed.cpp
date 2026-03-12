/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 12:41:23 by codespace         #+#    #+#             */
/*   Updated: 2026/02/20 15:06:13 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Default constructor
Fixed::Fixed() {
	std::cout << GREEN << BOLD << "Default constructor called" << RESET << std::endl;
	this->_value = 0;
}

// Copy constructor
Fixed::Fixed(const Fixed& copy)
{
	std::cout << BLUE << BOLD << "Copy constructor called" << RESET << std::endl;
	*this = copy;
}

// Assignation constructor
Fixed&	Fixed::operator=(const Fixed& other)
{
	std::cout << MAGENTA << BOLD << "Copy assignment operator called" << RESET << std::endl;
	// Protect to not assign the same object
	if (this != &other)
		this->_value = other.getRawBits();
	return *this;
}

// Destructor
Fixed::~Fixed() {
	std::cout << RED << BOLD << "Destructor called" << RESET << std::endl;
}

int	Fixed::getRawBits(void) const {
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called" << std::endl;
	// value * 2^8
    this->_value = value << this->_fractionalBits;
}

Fixed::Fixed(const float value) {
	std::cout << "Float constructor called" << std::endl;
	float floatValue = 1 << this->_fractionalBits;
	this->_value = roundf(value * floatValue);
}

int	Fixed::toInt() const {
	return (this->_value >> this->_fractionalBits);
}

float	Fixed::toFloat() const {
	float floatValue = 1 << this->_fractionalBits;
	return ((float)this->_value / floatValue);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}
