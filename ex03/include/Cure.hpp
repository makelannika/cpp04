/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:46:23 by amakela           #+#    #+#             */
/*   Updated: 2024/08/27 21:14:35 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
	public:
		Cure();
		~Cure();

		Cure(const Cure& obj);

		Cure&	operator=(const Cure& obj);
		
		Cure* clone() const override;
		void use(ICharacter& target) override;
};

#endif
