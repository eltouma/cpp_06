/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:16:24 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/22 19:53:40 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

# define MIN_INT -2147483648
# define MAX_INT 2147483647
# define MIN_DBL 1E-37
# define MAX_DBL 1E+37

class	ScalarConverter
{
	ScalarConverter(void);
	ScalarConverter(const ScalarConverter &obj);
	ScalarConverter& operator=(const ScalarConverter &rhs);
	~ScalarConverter(void);

public:
	static void convert(std::string s);
};

int	isSpecialDouble(std::string s);
int	isSpecialFloat(std::string s);
int	isInt(std::string s);
int	isFloat(std::string s);
int	isDouble(std::string s);
void	convertToInt(std::string s);
