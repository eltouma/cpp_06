/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverterUtils.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:16:13 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/22 21:18:14 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	impossibleConversion(std::string s)
{
	(void)s;
	if (!isInt(s) && !isFloat(s) && !isDouble(s))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
	return (0);
}

int	isSpecialDouble(std::string s)
{
	std::string nan = "nan";
	std::string inf = "inf";
	std::string pInf = "+inf";
	std::string nInf = "-inf";
	int	neg;

	neg = 0;
	if (s == nan || s == inf || s == pInf || s == nInf)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		if (s == pInf)
			std::cout << "float: " << s.erase(0, 1) << 'f' << std::endl;
		else
			std::cout << "float: " << s << 'f' << std::endl;
		std::cout << "double: " << s << std::endl;
		return (0);
	}
	if (!isSpecialFloat(s))
		return (0);
/*
	if (s != nan || s != inf || s != pInf || s != nInf)
	{
		if (!isFloat(s) && !isDouble(s))
		{
			for (int i = 0; s[i] != '\0'; i++)
			{
				if (s[0] == '-')
				{
					i += 1;
					neg = 1;
				}
				if (!isdigit(s[i]) && s.length() > 1 && !neg)
					return impossibleConversion(s);
			}
		}
	}
*/
	return (1);
}

int	isSpecialFloat(std::string s)
{
	std::string nanf = "nanf";
	std::string inff = "inff";
	std::string pInff = "+inff";
	std::string nInff = "-inff";
	int	neg;

	neg = 0;
	if (s == nanf || s == inff || s == pInff || s == nInff)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		if (s == pInff)
			std::cout << "float: " << s.erase(0, 1) << std::endl;
		else
			std::cout << "float: " << s << std::endl;
		std::cout << "double: " << s.substr(0, s.length() - 1) << std::endl;
		return (0);
	}
/*
	if (s != nanf || s != inff || s != pInff || s != nInff)
	{
		if (!isFloat(s) && !isDouble(s))
		{
			for (int i = 0; s[i] != '\0'; i++)
			{
				if (s[0] == '-')
				{
					neg = 1;
					i += 1;
				}
				if (!isdigit(s[i]) && s.length() > 1 && !neg)
					return impossibleConversion(s);
			}
		}
	}
*/
	return (1);
}
