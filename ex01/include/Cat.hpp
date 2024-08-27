/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 23:54:12 by amakela           #+#    #+#             */
/*   Updated: 2024/08/27 16:48:34 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Cat : public Animal {
	private:
		Brain*	brain;
		
    public:
        Cat();
        ~Cat() override;

        Cat(const Cat& obj);

        Cat& operator=(const Cat& obj);
        
        void        makeSound() const override;
};

#endif
