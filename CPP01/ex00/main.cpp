/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 10:20:40 by codespace         #+#    #+#             */
/*   Updated: 2026/02/21 14:15:28 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	// Heap allocation
	Zombie *z1 = newZombie("HeapZombie");
	// Stack allocation
	randomChump("StackZombie");
	// Delete manually heap allocated memory
	z1->announce();
	delete(z1);
	return (0);
}