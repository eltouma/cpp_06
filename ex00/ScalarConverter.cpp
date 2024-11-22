/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:16:13 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/22 18:19:17 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

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

void	convertToChar(std::string s)
{
	char	c;
	long	l;
	float	f;
	double	d;

	c = s.c_str()[0];
//	if (!isChar(str))
//	{
	std::cout << "char: " << c << std::endl;
	l = static_cast<int>(c);
	std::cout << "int: " << l << std::endl;
	f = static_cast<float>(c);
	std::cout << std::fixed << std::setprecision(1) << "float: " << f << "f";
	d = static_cast<double>(c);
	std::cout << "\ndouble: " << d << std::endl;
	std::cout.unsetf(std::ios::fixed); //  << std::endl;
//}
//	else
//		std::cout << "char: impossible" << std::endl;
	
}

int	isChar(std::string s)
{
	static int	size = s.length();

	if (size == 1 && !isdigit(s[0]) && isprint(s[0]))
	{
		convertToChar(s);
		return (0);
//		return (convertToChar(s), 0);
		//std::cout << "c'est un char correct" << std::endl;
//		return (0);
	}
//	std::cout << __func__ << " ligne " <<__LINE__ << " 1\n";
	std::cout << "char: non displayable" << std::endl;
	if (!isInt(s))
		return (1);
	return (1);
}

void	ScalarConverter::convert(std::string s)
{
//	std::cout << "convert " << s << std::endl;
	std:: cout << std::endl;
	if (!isSpecialDouble(s))
		return ;
	if (!isChar(s))
		return ;
	std::cout << "hello\n";
//		convertTochar(s);
	std:: cout << std::endl;
//	isInt(s);
	isDouble(s);
	isFloat(s);
}
