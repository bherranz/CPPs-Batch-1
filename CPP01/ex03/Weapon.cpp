/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:34:37 by codespace         #+#    #+#             */
/*   Updated: 2026/02/09 16:19:51 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	this->_type = type;
}

Weapon::~Weapon() {}

void		Weapon::setType(const std::string& type) {
	this->_type = type;
}

const std::string&	Weapon::getType() const {
	return (this->_type);
};
