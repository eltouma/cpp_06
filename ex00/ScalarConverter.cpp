/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:16:13 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/22 21:23:42 by eltouma          ###   ########.fr       */
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
//	if (!nb)
//		return (-1);
	if (*endptr != 'f' && *(endptr + 1) != '\0')
		return (0);	
	if (nb < MIN_DBL || nb > MAX_DBL)
		return (0);
	std::cout << __func__ << std::endl;
	return (nb);
}

int	isDouble(std::string s)
{
	char	*endptr;
	long double nb;

	nb = strtold(s.c_str(), &endptr);
	if (!nb)
		return (-1);
	if (*endptr != '\0')
		return (0);
	if (nb < MIN_DBL || nb > MAX_DBL)
		return (0);
	std::cout << __func__ << std::endl;
	return (nb);
}

int	isInt(std::string s)
{
	char	*endptr;
	long	nb;

	nb = strtol(s.c_str(), &endptr, 10);
	if (*endptr != '\0')
		return (0);	
	if (nb < MIN_INT || nb > MAX_INT)
		return (0);

	std::cout << __func__ << std::endl;
	return (nb);
}

void	convertToChar(std::string s)
{
	char	c;
	long	l;
	float	f;
	double	d;

	c = s.c_str()[0];
	std::cout << "char: " << c << std::endl;
	l = static_cast<int>(c);
	std::cout << "int: " << l << std::endl;
	f = static_cast<float>(c);
	std::cout << std::fixed << std::setprecision(1) << "float: " << f << "f";
	d = static_cast<double>(c);
	std::cout << "\ndouble: " << d << std::endl;
	std::cout.unsetf(std::ios::fixed);
}

void	convertToInt(std::string s)
{
	long	l;
	float	f;
	double	d;

	std::cout << __func__ << std::endl;
	std::cout << "char: non displayable" << std::endl;
	l = isInt(s);
	std::cout << "int: " << l << std::endl;
	f = static_cast<float>(l);
	std::cout << std::fixed << std::setprecision(1) << "float: " << f << "f";
	d = static_cast<double>(l);
	std::cout << "\ndouble: " << d << std::endl;
	std::cout.unsetf(std::ios::fixed);
}

void	convertToFloat(std::string s)
{
	long	l;
	float	f;
	double	d;
	long	min;
	long	max;

	std::cout << __func__ << std::endl;
	min = static_cast<float>(MIN_INT);
	max = static_cast<float>(MAX_INT);
	std::cout << "char: non displayable" << std::endl;
	f = isFloat(s);
	if (f < min || f > max)
		std::cout << "int: outside of range" << std::endl;
	else
	{
		l = static_cast<float>(f);
		std::cout << "int: " << l << std::endl;
	}
	std::cout << std::fixed << std::setprecision(1) << "float: " << f << "f";
	d = static_cast<float>(f);
	std::cout << "\ndouble: " << d << std::endl;
	std::cout.unsetf(std::ios::fixed);
}

void	convertToDouble(std::string s)
{
	long	l;
	double	d;
	long	min;
	long	max;

	std::cout << __func__ << std::endl;
	min = static_cast<long>(MIN_INT);
	max = static_cast<long>(MAX_INT);
	std::cout << "char: non displayable" << std::endl;
	d = isDouble(s);
	if (d < 0)
		d = 0;
	if (d < min || d > max)
		std::cout << "int: outside of range" << std::endl;
	else
	{
		l = static_cast<int>(d);
		std::cout << "int: " << l << std::endl;
	}
	std::cout << std::fixed << std::setprecision(1) << "float: " << d << "f";
	//std::cout << std::fixed << std::showpoint << "float: " << d << "f";
	std::cout << "\ndouble: " << d << std::endl;
	std::cout.unsetf(std::ios::showpoint);
}

int	isChar(std::string s)
{
	static int	size = s.length();

	if (size == 1 && !isdigit(s[0]) && isprint(s[0]))
		return (convertToChar(s), 0);
	if (isInt(s))
		return (convertToInt(s), 0);
	if (isFloat(s))
		return (convertToFloat(s), 0);
	if (isDouble(s))
		return (convertToDouble(s), 0);
	return (1);
}

void	ScalarConverter::convert(std::string s)
{
	std::cout << "convert " << s << std::endl;
	std:: cout << std::endl;
/*
	if (!isSpecialDouble(s))
	{
		std::cout << "TA MERE\n";
		return ;
	}
*/
	if (!isChar(s))
		return ;
}
