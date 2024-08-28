/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:23:45 by amakela           #+#    #+#             */
/*   Updated: 2024/08/28 19:33:04 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "../include/IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	private:
		AMateria*	learned[4] = {nullptr};
		
	public:
		MateriaSource();
		~MateriaSource();
		
		MateriaSource(const MateriaSource& obj);

		MateriaSource&	operator=(const MateriaSource& obj);
		
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);	
};

#endif
