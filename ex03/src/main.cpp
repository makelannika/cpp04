/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:21:19 by amakela           #+#    #+#             */
/*   Updated: 2024/08/28 21:32:33 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"
#include "../include/Ice.hpp"
#include "../include/Cure.hpp"
#include "../include/Character.hpp"
#include "../include/MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;

	std::cout << std::endl;
	
	IMateriaSource*	source = new MateriaSource();
	
	for (int i = 0; i < 3; i++) {
		AMateria*		ice = new Ice();
		AMateria*		cure = new Cure();
		source->learnMateria(ice);
		source->learnMateria(cure);
	}
	
	ICharacter*		bobby = new Character("bobby");
	ICharacter*		karen = new Character("Karen");

	bobby->equip(source->createMateria("ice"));
	bobby->equip(source->createMateria("cure"));
	karen->equip(source->createMateria("ice"));

	bobby->use(0, *karen);
	bobby->use(1, *karen);
	karen->use(3, *bobby);
	karen->use(9, *bobby);
	karen->unequip(0);

	delete source;
	delete bobby;
	delete karen;
	
	return 0;
}
