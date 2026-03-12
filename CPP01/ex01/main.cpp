/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 12:18:33 by codespace         #+#    #+#             */
/*   Updated: 2026/02/09 14:23:11 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int		N = 10;
	Zombie*	horde = zombieHorde(N, "HordeZombie");
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete[] (horde);
	return (0);
}