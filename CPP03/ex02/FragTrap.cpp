/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 15:47:28 by codespace         #+#    #+#             */
/*   Updated: 2026/02/25 15:51:40 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << GREEN << BOLD << "FragTrap default constructor called" << RESET << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << GREEN << BOLD << "FragTrap name constructor called for " << this->_name << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
	std::cout << BLUE << BOLD << "FragTrap copy constructor called" << RESET << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& other)
{
	std::cout << MAGENTA << BOLD << "FragTrap copy assignment operator called" << RESET << std::endl;
	// Protect to not assign the same object
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << RED << BOLD << "FragTrap destructor called" << RESET << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << "High fives!!\n";
}
