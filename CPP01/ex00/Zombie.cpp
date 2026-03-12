/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 14:28:53 by codespace         #+#    #+#             */
/*   Updated: 2026/02/09 12:16:00 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
    this->_name = name;
};
Zombie::~Zombie() {
    std::cout << RED << "Zombie " << this->_name << " destroyed" << RESET << std::endl;
};

void Zombie::announce(void) {
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
