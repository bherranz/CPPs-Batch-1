/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 15:21:23 by codespace         #+#    #+#             */
/*   Updated: 2026/02/25 15:37:19 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap pikachu("pikachu");
	ScavTrap charizard("charizard");
	ScavTrap charmander(charizard);

	std::cout << RED << BOLD << "\nAttacks\n" <<RESET;
	pikachu.attack("Target1");
	charizard.attack("Target2");
	charmander.attack("Target3");

	std::cout << BLUE << BOLD << "\nDamage and Repair\n" <<RESET;
	charizard.takeDamage(30);
	charizard.beRepaired(15);
	pikachu.takeDamage(5);
	pikachu.beRepaired(2);

	std::cout << MAGENTA << BOLD << "\nSpecial ability\n" <<RESET;
	charizard.guardGate();
	
	std::cout << std::endl;
	return (0);
}