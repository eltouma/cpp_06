/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:16:24 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/21 17:49:50 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>

# define MIN_INT -2147483648
# define MAX_INT 2147483647
# define MIN_DBL 1E-37
# define MAX_DBL 1E+37
//# define MAX_LONG 2147483647

class	ScalarConverter
{
/*
	ScalarConverter(void);
	ScalarConverter(const ScalarConverter &obj);
	ScalarConverter& operator=(const ScalarConverter &rhs);
	~ScalarConverter(void);
*/
public:
	static void convert(std::string s);
};
