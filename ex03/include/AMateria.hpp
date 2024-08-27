/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:40:22 by amakela           #+#    #+#             */
/*   Updated: 2024/08/27 21:02:27 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>

class AMateria {
	protected:
		std::string	type;

	public:
		AMateria();
		virtual ~AMateria();

		AMateria(const AMateria& obj);
		AMateria(std::string const & type);

		AMateria& operator=(const AMateria& obj);
		
		std::string const & getType() const; //Returns the materia type
		
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
