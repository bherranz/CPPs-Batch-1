/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 15:21:23 by codespace         #+#    #+#             */
/*   Updated: 2026/02/25 15:55:27 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    std::cout << GREEN << BOLD << "Constructing" << RESET << std::endl;
    ClapTrap pikachu("pikachu");
    FragTrap charizard("charizard");
    FragTrap charmander(charizard);

    std::cout << RED << BOLD << "\nAttacks" << RESET << std::endl;
    pikachu.attack("Target1");
    charizard.attack("Target2");
    charmander.attack("Target3");

    std::cout << BLUE << BOLD << "\nDamage and repair" << RESET << std::endl;
    charizard.takeDamage(40);
    charizard.beRepaired(20);
    pikachu.takeDamage(10);
    pikachu.beRepaired(5);

    std::cout << MAGENTA << BOLD << "\nSpecial ability" << RESET << std::endl;
    charizard.highFivesGuys();

    std::cout << std::endl;
    
    return (0);
}
