/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 18:57:03 by codespace         #+#    #+#             */
/*   Updated: 2026/02/26 19:35:20 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal () {
    std::cout << GREEN << BOLD << "Animal default constructor called" << RESET << std::endl;
	this->type = "default";
}

Animal::Animal(const Animal &copy) : type(copy.type) {
    std::cout << BLUE << BOLD << "Animal copy constructor called" << RESET << std::endl;
}

Animal& Animal::operator=(const Animal &other) {
	std::cout << MAGENTA << BOLD << "Animal copy assignment operator called" << RESET << std::endl;
	// Protect to not assign the same object
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

Animal::~Animal() {
    std::cout << RED << BOLD << "Animal destructor called" << RESET << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Default animal sound" << RESET << std::endl;
}

const std::string& Animal::getType() const {
    return (this->type);
}
