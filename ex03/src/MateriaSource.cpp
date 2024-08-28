/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:32:47 by amakela           #+#    #+#             */
/*   Updated: 2024/08/28 20:23:36 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource() {}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (learned[i])
			delete learned[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource& obj) {
	for (int i = 0; i < 4; i++) {
		if (obj.learned[i])
			learned[i] = obj.learned[i]->clone();
		else
			learned[i] = nullptr;
	}
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& obj) {
	if (this != &obj) {
		for (int i = 0; i < 4; i++) {
			if (learned[i])
				delete learned[i];
			if (obj.learned[i])
				learned[i] = obj.learned[i]->clone();
		}
	}
	return (*this);
};

void	MateriaSource::learnMateria(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (!learned[i]) {
			learned[i] = m;
			return ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (learned[i]->getType() == type)
			return (learned[i]->clone());
	}
	return 0;
}
