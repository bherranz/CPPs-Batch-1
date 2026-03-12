/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 19:02:26 by codespace         #+#    #+#             */
/*   Updated: 2026/02/27 11:11:03 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {
	//Animal *parrot = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " ";
	j->makeSound();

	std::cout << i->getType() << " ";
	i->makeSound();

	delete j;
	delete i;

	const int zooSize = 4;
	Animal* zoo[zooSize];

	for (int k = 0; k < zooSize / 2; k++) {
		zoo[k] = new Dog();
	}
	for (int k = zooSize / 2; k < zooSize; k++) {
		zoo[k] = new Cat();
	}

	for (int k = 0; k < zooSize; k++) {
		zoo[k]->makeSound();
	}

	for (int k = 0; k < zooSize; k++) {
		delete zoo[k];
	}
	return (0);
}