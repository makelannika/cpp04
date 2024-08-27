/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 00:16:33 by amakela           #+#    #+#             */
/*   Updated: 2024/08/27 18:15:05 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"
#include "../include/AAnimal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"

int main()
{
	const AAnimal*	animals[6];
	for (int i = 0; i < 3; i++)
		animals[i] = new Cat();
	for (int i = 3; i < 6; i++)
		animals[i] = new Dog();
    std::cout << std::endl;

	animals[2]->makeSound();
	animals[3]->makeSound();
	std::cout << std::endl;
	
	for (int i = 0; i < 6; i++)
		delete animals[i]; 
	std::cout << std::endl;

	const Cat	cat;
	const Cat	anotherCat(cat);
	Cat			thirdCat;
	thirdCat = anotherCat;
	std::cout << std::endl;

	std::cout << "cat: " << &cat << std::endl;
	std::cout << "anotherCat: " << &anotherCat << std::endl;
	std::cout << "thirdCat: " << &thirdCat << std::endl;
	std::cout << std::endl;
  
    return 0;
}
