/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 23:55:01 by amakela           #+#    #+#             */
/*   Updated: 2024/08/27 18:10:25 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal() {
    std::cout << "Cat constructor called" << std::endl;
    type = "cat";
	brain = new Brain();
}

Cat::~Cat() {
	delete brain;
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat& obj) : AAnimal(obj) {
    std::cout << "Cat copy constructor called" << std::endl;
	brain = new Brain(*obj.brain);
}

Cat& Cat::operator=(const Cat& obj) {
    if (this != &obj) {
        AAnimal::operator=(obj);
		*brain = *obj.brain;
	}
    return (*this);
}

void    Cat::makeSound() const {
    std::cout << "purr meow" << std::endl;
}
