/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverterUtils.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:16:13 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/22 17:28:13 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	isSpecialDouble(std::string s)
{
	std::string nan = "nan";
	std::string inf = "inf";
	std::string pInf = "+inf";
	std::string nInf = "-inf";

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
	if (((s != nan || s != inf) && s.length() >= 3) && ((s != pInf || s != nInf) && s.length() >= 4))
	{
		if (!isSpecialFloat(s))
			return (0);
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return (0);
	}
	return (1);
}

int	isSpecialFloat(std::string s)
{
	std::string nanf = "nanf";
	std::string inff = "inff";
	std::string pInff = "+inff";
	std::string nInff = "-inff";

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
	if (((s != nanf || s != inff) && s.length() >= 4) && ((s != pInff || s != nInff) && s.length() >= 5))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return (0);
	}
	return (1);
}
