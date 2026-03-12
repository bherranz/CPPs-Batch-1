/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 15:30:18 by codespace         #+#    #+#             */
/*   Updated: 2026/02/25 15:39:17 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << GREEN << BOLD << "ClapTrap default constructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << GREEN << BOLD << "ClapTrap name constructor called for " << _name << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy) : _name(copy._name), _hitPoints(copy._hitPoints), _energyPoints(copy._energyPoints), _attackDamage(copy._attackDamage)
{
	std::cout << BLUE << BOLD << "ClapTrap copy constructor called" << RESET << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << MAGENTA << BOLD << "ClapTrap copy assignment operator called" << RESET << std::endl;
	// Protect to not assign the same object
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << RED << BOLD << "ClapTrap destructor called" << RESET << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
	{
		std::cout << "No energy or hit points\n";
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", ";
	std::cout << "causing " << this->_attackDamage << " points of damage!\n";
	this->_energyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "No hit points, ClapTrap " << this->_name << " is already dead!\n";
		return ;
	}
	this->_hitPoints = this->_hitPoints - amount;
	if (this->_hitPoints < 0)
    	this->_hitPoints = 0;
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage! Health is now " << this->_hitPoints << ".\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy or hit points to repair!\n";
		return ;
	}
	this->_energyPoints--;
	this->_hitPoints = this->_hitPoints + amount;
	std::cout << "ClapTrap " << this->_name << " repairs itself, gaining " << amount;
	std::cout << " hit points! Health is now " << this->_hitPoints << ".\n";
}
