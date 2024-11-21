/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:16:03 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/21 12:22:24 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char **argv)
{
	std::string input;

	if (argc != 2)
	{
		std::cerr << "Wrong number of argument" << std::endl;
		return 1;
	}
	input = argv[1];
	ScalarConverter::convert(input);
}
