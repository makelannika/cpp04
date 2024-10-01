/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 19:26:13 by amakela           #+#    #+#             */
/*   Updated: 2024/10/01 02:20:52 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	name = "unknown";
}

Character::~Character() {
	for (int i = 0; i < 4; i++) {
		if (inventory[i])
			delete inventory[i];
	}
	for (int i = 0; dropped[i]; i++) {
			delete dropped[i];
	}
}

Character::Character(const Character& obj) {
	name = obj.name;
	for (int i = 0; i < 4; i++) {
		if (obj.inventory[i])
			inventory[i] = obj.inventory[i]->clone();
	}
	for (int i = 0; i < 100; i++) { /* to keep or not to keep */
		if (obj.dropped[i])
			dropped[i] = obj.dropped[i]->clone();
	}
}

Character::Character(std::string name) : name(name) {}

Character&	Character::operator=(const Character& obj) {
	if (this != &obj) {
		name = obj.name;
		for (int i = 0; i < 4; i++) {
		if (inventory[i])
			delete inventory[i];
		if (obj.inventory[i]) 
			inventory[i] = obj.inventory[i]->clone();
		}
		for (int i = 0; i < 100; i++) { /* to keep or not to keep */
			if (dropped[i])
				delete dropped[i];
			if (obj.dropped[i])
				dropped[i] = obj.dropped[i]->clone();
		}
	}
	return (*this);
}

std::string const &	Character::getName() const {
	return (name);
}

void	Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (!inventory[i]) {
			inventory[i] = m; /* should this be a copy? */
			std::cout << m->getType() << " equipped" << std::endl;
			return ;
		}
	}
	std::cout << "inventory is full, cannot equip " << m->getType() << std::endl;
}

void	Character::unequip(int idx) {
	if (inventory[idx]) {
		for (int i = 0; i < 100; i++) /* fix this */
			if (!dropped[i]) {
				dropped[i] = inventory[idx];
				inventory[idx] = nullptr;
				return ;
			}
	}	
}

void	Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx <= 3) {
		if (inventory[idx])
			inventory[idx]->use(target);
		else
			std::cout << "slot " << idx << " is empty" << std::endl;
		return ;
	}
	std::cout << "invalid slot" << std::endl;
}
