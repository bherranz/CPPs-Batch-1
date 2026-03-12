/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 15:21:23 by codespace         #+#    #+#             */
/*   Updated: 2026/02/20 16:19:54 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap pikachu("pikachu");
    ClapTrap charizard("charizard");
    ClapTrap clonDePikachu(pikachu);
    ClapTrap lizardon;

    lizardon = charizard;

    // pikachu attacks charizard but default attack damage is 0
    pikachu.attack("charizard");
    charizard.takeDamage(0);

    // charizard repares itself
    charizard.beRepaired(5);

    // charizard receives mortal damage
    charizard.takeDamage(20);

    // charizard tries to interact dead
    charizard.attack("pikachu");
    charizard.beRepaired(10);

    std::cout << "\n--- Energy test ---\n" << std::endl;

    for (int i = 0; i < 10; i++)
    {
        pikachu.attack("Tree");
    }
    return (0);
}