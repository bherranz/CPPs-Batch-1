/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 10:20:42 by codespace         #+#    #+#             */
/*   Updated: 2026/02/09 12:10:05 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	// Allocate memory on the heap
	return (new Zombie(name));
}

// With heap allocation, the object lives until we order its deletion
// Dynamic memory
// It is convenient to use the Heap when the object needs to exist outside of the function that created it
