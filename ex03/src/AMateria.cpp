/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:51:41 by amakela           #+#    #+#             */
/*   Updated: 2024/08/28 19:46:48 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

AMateria::AMateria() {}

AMateria::~AMateria() {}

AMateria::AMateria(const AMateria& obj) {
	*this = obj;
}

AMateria::AMateria(std::string const & type) {
	this->type = type;
}

AMateria& AMateria::operator=(const AMateria& obj) {
	if (this != &obj)
		type = obj.type;
	return (*this);
}

std::string const & AMateria::getType() const {
	return (type);
}

void	AMateria::use(ICharacter&) {}
