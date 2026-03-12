/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 18:57:03 by codespace         #+#    #+#             */
/*   Updated: 2026/02/26 19:35:14 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal () {
	std::cout << GREEN << BOLD << "WrongAnimal default constructor called" << RESET << std::endl;
	this->type = "default";
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) : type(copy.type) {
	std::cout << BLUE << BOLD << "WrongAnimal copy constructor called" << RESET << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other) {
	std::cout << MAGENTA << BOLD << "WrongAnimal copy assignment operator called" << RESET << std::endl;
	// Protect to not assign the same object
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << RED << BOLD << "WrongAnimal destructor called" << RESET << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Default WrongAnimal sound" << std::endl;
}

const std::string& WrongAnimal::getType() const {
	return (this->type);
}
