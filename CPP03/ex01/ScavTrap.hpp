/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 13:09:26 by codespace         #+#    #+#             */
/*   Updated: 2026/02/25 13:58:21 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class	ScavTrap: public ClapTrap {
	private:
	
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& copy);
		ScavTrap&	operator=(const ScavTrap& other);
		~ScavTrap();

		void	attack(const std::string& target);
		void guardGate();
};

#endif
