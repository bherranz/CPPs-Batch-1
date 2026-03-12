/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 12:08:08 by codespace         #+#    #+#             */
/*   Updated: 2026/02/20 15:05:00 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>
//Colors
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define BOLD    "\033[1m" 

class Fixed
{
	private:
		int	_value;
		static const int	_fractionalBits = 8;
	public:
		Fixed();
		Fixed(const Fixed& copy);
		Fixed& operator=(const Fixed& other);
		~Fixed();
		int	 	getRawBits( void ) const;
		void	setRawBits( int const raw );

		Fixed(const int value);
		Fixed(const float value);
		int		toInt() const;
		float	toFloat() const;

		// Comparison operators
		bool	operator>(const Fixed& other) const;
		bool	operator<(const Fixed& other) const;
		bool	operator>=(const Fixed& other) const;
		bool	operator<=(const Fixed& other) const;
		bool	operator==(const Fixed& other) const;
		bool	operator!=(const Fixed& other) const;

		// Arithmetic operators
		Fixed	operator+(const Fixed& other) const;
		Fixed	operator-(const Fixed& other) const;
		Fixed	operator*(const Fixed& other) const;
		Fixed	operator/(const Fixed& other) const;

		// Increment/decrement operators
		// Pre-increment (returns a reference to the modified object)
        Fixed& operator++();
        // Post-increment (returns a copy of the object before being modified)
        Fixed operator++(int);
        // Pre-decrement
        Fixed& operator--();
        // Post-decrement
        Fixed operator--(int);
		
		// min/max methods
		static Fixed&		min(Fixed& n1, Fixed& n2);
		static const Fixed&	min(const Fixed& n1, const Fixed& n2);
		static Fixed&		max(Fixed& n1, Fixed& n2);
		static const Fixed&	max(const Fixed& n1, const Fixed& n2);
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif
