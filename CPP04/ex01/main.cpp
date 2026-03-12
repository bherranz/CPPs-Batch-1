/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 19:02:26 by codespace         #+#    #+#             */
/*   Updated: 2026/02/27 11:01:06 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {
	std::cout << BOLD << "-- 100 animals array --" << RESET << std::endl;
	Animal *zoo[100];
	for (int i = 0; i < 50; i++)
		zoo[i] = new Dog();
	for (int i = 50; i < 100; i++)
		zoo[i] = new Cat();
	for (int i = 0; i < 100; i++)
		delete (zoo[i]);

	std::cout << BOLD << "-- Deep copy tests --" << RESET << std::endl;
	Dog basicDog;
    {
        // The keys create a temporal scope
        Dog tmpDog = basicDog; 
    } // tmpDog is destroyed here. If it was a shallow copy, it would destroy the brain that shares with basicDog
    // If basicDog is alive and can make its sound, deep copy works
    std::cout << "Original dog: ";
    basicDog.makeSound();
	
	Cat basicCat;
    Cat assignedCat;
	// Copies brain content to prevent memory leaks and double deletion
    assignedCat = basicCat; 
    std::cout << "Original cat: ";
    basicCat.makeSound();
	return (0);
}