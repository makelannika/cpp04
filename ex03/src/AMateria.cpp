/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:51:41 by amakela           #+#    #+#             */
/*   Updated: 2024/08/27 20:50:34 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

AMateria::AMateria() {
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::~AMateria() {
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria::AMateria(const AMateria& obj) {
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = obj;
}

AMateria::AMateria(std::string const & type) {
	std::cout << "AMateria type constructor called" << std::endl;
	this->type = type;
}

AMateria& operator=(const AMateria& obj) {
	if (this != &obj)
		type = obj.type;
	return (*this);
}

std::string const & AMateria::getType() {
	return (type);
}

void	AMateria::use(ICharacter& target) {
	
}
