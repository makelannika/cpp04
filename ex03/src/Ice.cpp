/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:58:45 by amakela           #+#    #+#             */
/*   Updated: 2024/10/01 01:34:08 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::~Ice() {}

Ice::Ice(const Ice& obj) : AMateria(obj) {}

Ice&	Ice::operator=(const Ice& obj) {
	if (this != &obj) /* "when assigning a materia to another copying the type doesn't make sense" */
		AMateria::operator=(obj); 
	return (*this);
}

Ice*	Ice::clone() const {
	return new Ice(); // where should i delete this
}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
