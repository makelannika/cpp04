/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 19:26:13 by amakela           #+#    #+#             */
/*   Updated: 2024/08/28 21:12:24 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

Character::Character() {
	name = "unknown";
}

Character::~Character() {
	for (int i = 0; i < 4; i++) {
		if (inventory[i])
			delete inventory[i];
	}
	for (int i = 0; i < 100; i++) {
		if (dropped[i])
			delete dropped[i];
	}
}

Character::Character(const Character& obj) {
	name = obj.name;
	for (int i = 0; i < 4; i++) {
		if (obj.inventory[i])
			inventory[i] = obj.inventory[i]->clone();
	}
	for (int i = 0; i < 100; i++) {
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
		for (int i = 0; i < 100; i++) {
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
			inventory[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int idx) {
	if (inventory[idx]) {
		for (int i = 0; i < 100; i++)
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
	}
}
