/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 23:45:11 by amakela           #+#    #+#             */
/*   Updated: 2024/08/27 18:11:35 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal() {
    std::cout << "Dog constructor called" <<std::endl;
    type = "dog";
	brain = new Brain();
}

Dog::~Dog() {
	delete brain;
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog& obj) : AAnimal(obj) {
    std::cout << "Dog copy constructor called" << std::endl;
	brain = new Brain(*obj.brain);
}

Dog& Dog::operator=(const Dog& obj) {
    if (this != &obj) {
        AAnimal::operator=(obj);
		*brain = *obj.brain;
	}
    return (*this);
}

void    Dog::makeSound() const {
    std::cout << "woof woof" << std::endl;
}
