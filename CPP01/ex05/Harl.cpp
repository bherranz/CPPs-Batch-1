/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 09:56:05 by codespace         #+#    #+#             */
/*   Updated: 2026/02/10 10:58:41 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl () {}
Harl::~Harl () {}


void	Harl::debug( void )
{
	std::cout << GREEN << "[ DEBUG ]" << RESET << std::endl;
	std::cout << "I love having extra bacon for my" 
			  <<" 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!";
	std::cout << std::endl;
}

void	Harl::info( void )
{
	std::cout << BLUE << "[ INFO ]" << RESET << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put "
			  << "enough bacon in my burger! If you did, I wouldn’t be asking for more!";
	std::cout << std::endl;
}

void	Harl::warning( void )
{
	std::cout << MAGENTA << "[ WARNINIG ]" << RESET << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for "
			  << "years, whereas you started working here just last month.";
	std::cout << std::endl;
}

void	Harl::error( void )
{
	std::cout << RED << "[ ERROR ]" << RESET << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;
}

void	Harl::complain( std::string level )
{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	// Pointer array to member functions
	void (Harl::*ptr_complain[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	// array size 
	int limit = sizeof(levels) / sizeof(levels[0]);
	for (int i = 0; i < limit; i++)
		if (level == levels[i])
		{
			(this->*ptr_complain[i])();
			return ;
		}
	std::cout << "Level not found" << std::endl;
}
