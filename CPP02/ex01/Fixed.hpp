/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 12:08:08 by codespace         #+#    #+#             */
/*   Updated: 2026/02/20 10:43:07 by codespace        ###   ########.fr       */
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
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif
