/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:29:22 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/10/14 11:55:38 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout	<< GREEN
				<< "Ice constructor called"
				<< RESET
				<< std::endl;
}

Ice::Ice(Ice const &copy) : AMateria("ice") {
	*this = copy;
	std::cout	<< GREEN
				<< "Ice copy constructor called"
				<< RESET
				<< std::endl;
}

Ice& Ice::operator=(Ice const &src) {
	if(this != &src) {
		AMateria::operator=(src);
	}
	std::cout	<< GREEN
				<< "Ice assignment operator called"
				<< RESET
				<< std::endl;
	return *this;
}

Ice::~Ice () {
	std::cout	<< GREEN
				<< "Ice destructor called"
				<< RESET
				<< std::endl;
}

AMateria* Ice::clone() const {
	return new Ice(*this);
}