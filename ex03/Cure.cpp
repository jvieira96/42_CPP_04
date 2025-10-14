/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:52:26 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/10/14 15:47:34 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout	<< GREEN
				<< "Cure constructor called"
				<< RESET
				<< std::endl;
}

Cure::Cure(Cure const &copy) : AMateria("cure") {
	*this = copy;
	std::cout	<< GREEN
				<< "Cure copy constructor called"
				<< RESET
				<< std::endl;
}

Cure& Cure::operator=(Cure const &src) {
	if(this != &src) {
		AMateria::operator=(src);
	}
	std::cout	<< GREEN
				<< "Cure assignment operator called"
				<< RESET
				<< std::endl;
	return *this;
}

Cure::~Cure () {
	std::cout	<< GREEN
				<< "Cure destructor called"
				<< RESET
				<< std::endl;
}

AMateria* Cure::clone() const {
	return new Cure(*this);
}