/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 19:10:36 by codespace         #+#    #+#             */
/*   Updated: 2026/02/26 20:13:48 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << GREEN << BOLD << "Dog default constructor called" << RESET << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy) {
	this->brain = new Brain(*copy.brain);
    std::cout << BLUE << BOLD << "Dog copy constructor called" << RESET << std::endl;
}

Dog& Dog::operator=(const Dog &other) {
	std::cout << MAGENTA << BOLD << "Dog copy assignment operator called" << RESET << std::endl;
	// Protect to not assign the same object
	if (this != &other)
	{
		Animal::operator=(other);
		*this->brain = *other.brain;
	}
	return (*this);
}

Dog::~Dog() {
	delete (this->brain);
	std::cout << RED << BOLD << "Dog destructor called" << RESET << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Woof woof\n";
}
