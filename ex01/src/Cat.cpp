/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 23:55:01 by amakela           #+#    #+#             */
/*   Updated: 2024/08/27 17:37:38 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat() {
    std::cout << "Cat constructor called" << std::endl;
    type = "cat";
	brain = new Brain();
}

Cat::~Cat() {
	delete brain;
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat& obj) {
    std::cout << "Cat copy constructor called" << std::endl;
	Animal::operator=(obj);
	brain = new Brain(*obj.brain);
}

Cat& Cat::operator=(const Cat& obj) {
	std::cout << "Cat assignment operator called" << std::endl;
    if (this != &obj) {
        Animal::operator=(obj);
		delete brain;
		brain = new Brain(*obj.brain);
	}
    return (*this);
}

void    Cat::makeSound() const {
    std::cout << "purr meow" << std::endl;
}
