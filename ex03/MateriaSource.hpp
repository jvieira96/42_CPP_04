/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:39:54 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/10/14 15:39:01 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"

class MateriaSource {

private: 

	AMateria *_templates[4];

public: 

	MateriaSource();
	MateriaSource(MateriaSource const &copy);
	MateriaSource& operator=(MateriaSource const &src);
	~MateriaSource();

	void learMateria(AMateria *m);
	AMateria* createMateria(std::string const & type);

};


#endif