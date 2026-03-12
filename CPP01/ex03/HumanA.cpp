/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:49:23 by codespace         #+#    #+#             */
/*   Updated: 2026/02/09 16:36:24 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {
	this->_name = name;
	this->_weapon = weapon;
}

HumanA::~HumanA() {}

void	HumanA::attack() 
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}