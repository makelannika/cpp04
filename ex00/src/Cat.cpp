/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 23:55:01 by amakela           #+#    #+#             */
/*   Updated: 2024/08/27 00:54:36 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat() {
    std::cout << "Cat constructor called" <<std::endl;
    type = "cat";
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat& obj) {
    std::cout << "Cat copy constructor called" << std::endl;
    *this = obj;
}

Cat& Cat::operator=(const Cat& obj) {
    if (this != &obj)
        Animal::operator=(obj);
    return (*this);
}

void    Cat::makeSound() const {
    std::cout << "purr meow" << std::endl;
}
