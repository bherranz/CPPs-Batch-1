/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 19:10:36 by codespace         #+#    #+#             */
/*   Updated: 2026/02/26 19:16:04 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	this->type = "WrongCat";
	std::cout << GREEN << BOLD << "WrongCat default constructor called" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy) {
    std::cout << BLUE << BOLD << "WrongCat copy constructor called" << RESET << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &other) {
	std::cout << MAGENTA << BOLD << "WrongCat copy assignment operator called" << RESET << std::endl;
	// Protect to not assign the same object
	if (this != &other)
	{
		WrongAnimal::operator=(other);
	}
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << RED << BOLD << "WrongCat destructor called" << RESET << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "MEOW MEOW\n";
}
