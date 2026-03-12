/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 13:09:00 by codespace         #+#    #+#             */
/*   Updated: 2026/02/25 15:26:56 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << GREEN << BOLD << "ScavTrap default constructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << GREEN << BOLD << "ScavTrap name constructor called for " << this->_name << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
	std::cout << BLUE << BOLD << "ScavTrap copy constructor called" << RESET << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << MAGENTA << BOLD << "ScavTrap copy assignment operator called" << RESET << std::endl;
	// Protect to not assign the same object
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << RED << BOLD << "ScavTrap destructor called" << RESET << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
	{
		std::cout << "No energy or hit points\n";
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", ";
	std::cout << "causing " << this->_attackDamage << " points of damage!\n";
	this->_energyPoints--;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode.\n";
}
