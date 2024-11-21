/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:16:13 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/21 19:16:12 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

/*
ScalarConverter::ScalarConverter(void)
{
}

ScalarConverter::~ScalarConverter(void)
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &obj)
{
	*this = obj;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &rhs)
{
	(void)rhs;
	return (*this);
}
*/

int	isFloat(std::string s)
{
	char	*endptr;
	long double nb;

	nb = strtold(s.c_str(), &endptr);
	if (*endptr != 'f' && *(endptr + 1) != '\0')
	{
		std::cout << __func__ << " ligne " <<__LINE__ << " 1\n";
		return (1);	
	}
	if (nb < MIN_DBL || nb > MAX_DBL)
	{
		std::cout << __func__ << " ligne " <<__LINE__ << " 1\n";
		return 1;
	}
	std::cout << __func__ << " ligne " <<__LINE__ << " 0\n";
	return (0);
}

int	isDouble(std::string s)
{
	char	*endptr;
	long double nb;

	nb = strtold(s.c_str(), &endptr);
	if (*endptr != '\0')
	{
		std::cout << __func__ << " ligne " <<__LINE__ << " 1\n";
		return (1);	
	}
	if (nb < MIN_DBL || nb > MAX_DBL)
	{
		std::cout << __func__ << " ligne " <<__LINE__ << " 1\n";
		return 1;
	}
	std::cout << __func__ << " ligne " <<__LINE__ << " 0\n";
	return (0);
}

int	isInt(std::string s)
{
	char	*endptr;
	long	nb;

	nb = strtol(s.c_str(), &endptr, 10);
	if (*endptr != '\0')
	{
		std::cout << __func__ << " ligne " <<__LINE__ << " 1\n";
		return (1);	
	}
	if (nb < MIN_INT || nb > MAX_INT)
	{
		std::cout << __func__ << " ligne " <<__LINE__ << " 1\n";
		return 1;
	}
	std::cout << __func__ << " ligne " <<__LINE__ << " 0\n";
	return (0);
}

int	isChar(std::string s)
{
	static int	size = s.length();

	if (size == 1 && !isdigit(s[0]) && isprint(s[0]))
	{
		std::cout << __func__ << " ligne " <<__LINE__ << " 0\n";
		//std::cout << "c'est un char correct" << std::endl;
		return (0);
	}
	std::cout << __func__ << " ligne " <<__LINE__ << " 1\n";
//	std::cout << "c'est un char mais c'est un digit donc non displayable" << std::endl;
	return (1);
}

void	convertTochar(std::string s)
{
	if (!isChar(s))
		std::cout << "char: " << s.c_str()[0] << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
}
/*
void	isNan(std::string s)
{
	// Faire un pointeur sur fonction, cf cpp05
	// ou declarer des strings et faire ==
}
*/
void	ScalarConverter::convert(std::string s)
{
	std::cout << "convert " << s << std::endl;
	std:: cout << std::endl;
	convertTochar(s);
	std:: cout << std::endl;
	isInt(s);
	isDouble(s);
	isFloat(s);
}
