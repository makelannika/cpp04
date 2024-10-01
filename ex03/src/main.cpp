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

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource*	source = new MateriaSource();
	
	for (int i = 0; i < 3; i++) {
		source->learnMateria(new Ice());
		source->learnMateria(new Cure());
	}
	std::cout << std::endl;
	
	ICharacter*		bobby = new Character("bobby");
	ICharacter*		karen = new Character("Karen");

	bobby->equip(source->createMateria("ice"));
	bobby->equip(source->createMateria("cure"));
	bobby->equip(source->createMateria("ice"));
	bobby->equip(source->createMateria("ice"));
	bobby->equip(source->createMateria("ice"));
	std::cout << std::endl;

	karen->equip(source->createMateria("cure"));
	karen->equip(source->createMateria("ice"));
	karen->equip(source->createMateria("fire"));
	std::cout << std::endl;

	bobby->use(0, *karen);
	bobby->use(1, *karen);
	bobby->use(-1, *bobby);

	karen->use(1, *bobby);
	karen->use(3, *bobby);
	karen->use(9, *bobby);
	std::cout << std::endl;
	
	bobby->unequip(4);
	bobby->unequip(3);
	bobby->unequip(3);
	std::cout << std::endl;

	bobby->use(0, *karen);
	*(static_cast<Character*>(bobby)) = *(static_cast<Character*>(karen));
	bobby->use(0, *karen);
	std::cout << std::endl;

	delete source;
	delete bobby;
	delete karen;

	return 0;
}
