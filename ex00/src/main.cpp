/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 00:16:33 by amakela           #+#    #+#             */
/*   Updated: 2024/08/27 01:49:57 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"
#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const WrongAnimal* a = new WrongAnimal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongCat* b = new WrongCat();
    std::cout << std::endl;

    std::cout << "j is a " << j->getType() << std::endl;
    std::cout << "i is a " << i->getType() << std::endl;
    std::cout << "meta is a " << meta->getType() << std::endl;
    std::cout << "a is a " << a->getType() << std::endl;
    std::cout << "b is a " << b->getType() << std::endl;
    std::cout << std::endl;
    
    std::cout << i->getType() << ": ";
    i->makeSound();
    std::cout << j->getType() << ": ";
    j->makeSound();
    std::cout << meta->getType() << ": ";
    meta->makeSound();
    std::cout << a->getType() << ": ";
    a->makeSound();
    std::cout << b->getType() << ": ";
    b->makeSound();
    std::cout << std::endl;

    delete meta;
    delete j;
    delete i;
    delete a;
    delete b;
    
    return 0;
}
