/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:58:45 by amakela           #+#    #+#             */
/*   Updated: 2024/08/28 19:45:33 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"

Ice::Ice() {
	type = "ice";
}

Ice::~Ice() {}

Ice::Ice(const Ice& obj) {
	*this = obj;
}

Ice&	Ice::operator=(const Ice& obj) {
	if (this != &obj)
		type = obj.type;
	return (*this);
}

Ice*	Ice::clone() const {
	Ice*	clone = new Ice(); // where should i delete this
	return (clone);
}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
