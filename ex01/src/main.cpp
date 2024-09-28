/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 00:16:33 by amakela           #+#    #+#             */
/*   Updated: 2024/08/27 17:38:31 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal*	animals[6];
	for (int i = 0; i < 3; i++)
		animals[i] = new Cat();
	for (int i = 3; i < 6; i++)
		animals[i] = new Dog();
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
