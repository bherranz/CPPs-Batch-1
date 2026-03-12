/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 20:03:29 by codespace         #+#    #+#             */
/*   Updated: 2026/02/26 20:09:11 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain () {
    std::cout << GREEN << BOLD << "Brain default constructor called" << RESET << std::endl;
}

Brain::Brain(const Brain &copy) {
	std::cout << BLUE << BOLD << "Brain copy constructor called" << RESET << std::endl;
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = copy.ideas[i];
	}
}

Brain& Brain::operator=(const Brain &other) {
	std::cout << MAGENTA << BOLD << "Brain copy assignment operator called" << RESET << std::endl;
	// Protect to not assign the same object
	if (this != &other) {
		for (int i = 0; i < 100; i++) {
			this->ideas[i] = other.ideas[i];
		}
	}
	return (*this);
}

Brain::~Brain() {
    std::cout << RED << BOLD << "Brain destructor called" << RESET << std::endl;
}
