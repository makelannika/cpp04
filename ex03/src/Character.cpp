/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 19:26:13 by amakela           #+#    #+#             */
/*   Updated: 2024/08/27 20:29:01 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

Character::Character() {
	std::cout << "Character constructor called" << std::endl;
}

Character::~Character() {
	for (int i = 0; i < 4; i++) {
		if (inventory[i])
			delete inventory[i];
	}
	std::cout << "Character destructor called" << std::endl;
}

Character::Character(const Character& obj) {
	std::cout << "Character copy constructor called" << std::endl;
}

Character&	operator=(const Character& obj) {
	std::cout << "Character copy assignment operator called" << std::endl;
}

std::string cons &	Character::getName() const {
	return (name);
}

void	Character::equip(AMateria* m) {

}

void	Character::unequip(int idx) {
	
}

void	Character::use(int idx, ICharacter& target) {
	inventory[idx].use(target);
}
