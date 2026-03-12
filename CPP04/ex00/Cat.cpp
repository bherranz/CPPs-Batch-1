/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 19:10:36 by codespace         #+#    #+#             */
/*   Updated: 2026/02/26 19:15:14 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
	this->type = "Cat";
	std::cout << GREEN << BOLD << "Cat default constructor called" << RESET << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy) {
    std::cout << BLUE << BOLD << "Cat copy constructor called" << RESET << std::endl;
}

Cat& Cat::operator=(const Cat &other) {
	std::cout << MAGENTA << BOLD << "Cat copy assignment operator called" << RESET << std::endl;
	// Protect to not assign the same object
	if (this != &other)
	{
		Animal::operator=(other);
	}
	return (*this);
}

Cat::~Cat() {
	std::cout << RED << BOLD << "Cat destructor called" << RESET << std::endl;
}

void Cat::makeSound() const {
    std::cout << "MEOW MEOW\n";
}
