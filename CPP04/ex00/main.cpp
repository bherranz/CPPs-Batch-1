/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 19:02:26 by codespace         #+#    #+#             */
/*   Updated: 2026/02/26 19:38:29 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {
	std::cout << BOLD << "\n -- Subject tests --" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;

	std::cout << BOLD << "\n -- Copy and basic tests --" << std::endl;
	Dog basicDog;
	Dog copyDog(basicDog);
	Dog assignedDog;

	assignedDog = basicDog;

	Cat basicCat;
	Cat copyCat(basicCat);

	std::cout << copyDog.getType() << std::endl;
	std::cout << copyCat.getType() << std::endl;

	copyDog.makeSound();
	copyCat.makeSound();

	std::cout << BOLD << "\n -- Wrong Animal Tests --" << RESET << std::endl;
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongI = new WrongCat();
	const WrongCat* trueWrongCat = new WrongCat();

	std::cout << wrongI->getType() << std::endl;

	wrongI->makeSound();
	trueWrongCat->makeSound();
	wrongMeta->makeSound();

	delete wrongMeta;
	delete wrongI;
	delete trueWrongCat;

	return (0);
}