/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:58:45 by amakela           #+#    #+#             */
/*   Updated: 2024/08/27 21:23:06 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"

Ice::Ice() {
	std::cout "Ice constructor called" << std::endl;
	type = "ice";
}

Ice::~Ice() {
	std::cout << "Ice destructor called" << std::endl;
}

Ice::Ice(const Ice& obj) {
	std::cout << "Ice copy constructor called" << std::endl;
	*this = obj;
}

Ice&	Ice::operator=(const Ice& obj) {
	std::cout << "Ice copy assignment operator called" << std::endl;
	if (this != &obj)
		type = obj.type;
	return (*this);
}

Ice*	Ice::clone() clone {
	Ice*	clone = new Ice();
	return (clone);
}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
