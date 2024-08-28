/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:58:37 by amakela           #+#    #+#             */
/*   Updated: 2024/08/28 20:08:31 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.hpp"

Cure::Cure() {
	type = "cure";
}

Cure::~Cure() {}

Cure::Cure(const Cure& obj) {
	*this = obj;
}

Cure&	Cure::operator=(const Cure& obj) {
	if (this != &obj)
		type = obj.type;
	return (*this);
}

Cure*	Cure::clone() const {
	Cure*	clone = new Cure();
	return (clone);
}

void	Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
