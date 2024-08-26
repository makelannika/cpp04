/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 01:07:46 by amakela           #+#    #+#             */
/*   Updated: 2024/08/27 01:48:31 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

WrongCat::WrongCat() {
    type = "wrong cat";
    std::cout << "Wrong cat constructor called" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "Wrong cat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& obj) {
    std::cout << "Wrong cat copy constructor called" <<std::endl;
    *this = obj;
}

WrongCat& WrongCat::operator=(const WrongCat& obj) {
    if (this != &obj)
        WrongAnimal::operator=(obj);
    return (*this);
}

void    WrongCat::makeSound() const {
    std::cout << "i'm a wrong cat" << std::endl;
}