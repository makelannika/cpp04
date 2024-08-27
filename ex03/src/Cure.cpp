/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:58:37 by amakela           #+#    #+#             */
/*   Updated: 2024/08/27 21:21:57 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.hpp"

Cure::Cure() {
	std::cout << "Cure constructor called" << std::endl;
	type = "cure";
}

Cure::~Cure() {
	std::cout << "Cure destructor called" << std::endl;
}

Cure::Cure(const Cure& obj) {
	std::cout << "Cure copy constructor called" << std::endl;
	*this = obj;
}

Cure&	Cure::operator=(const Cure& obj) {
	std::cout << "Cure copy assignment operator called" << std::endl;
	if (this != &obj)
		type = obj.type;
	return (*this);
}

Cure*	Cure::clone() clone {
	Cure*	clone = new Cure();
	return (clone);
}

void	Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
