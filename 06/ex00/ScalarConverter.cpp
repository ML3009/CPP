/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:31:38 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/13 14:30:42 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::ScalarConverter(const ScalarConverter& rhs){
	*this = rhs;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& rhs){
	if(this != &rhs)
		*this = rhs;
	return *this;
}

ScalarConverter::~ScalarConverter(){}

void	ScalarConverter::convert(std::string str){


// verifier s il est printablr

}
