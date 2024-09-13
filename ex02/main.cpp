/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 16:49:00 by trimize           #+#    #+#             */
/*   Updated: 2024/09/13 17:18:04 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main()
{
	Array<unsigned int>		int_str(10);
	Array<unsigned int>		copy_int_str;
	Array<std::string>	copy_str;
	Array<std::string>	str(3);
	
	unsigned int	i = 0;
	
	std::cout << std::endl;
	while (i < int_str.size())
	{
		int_str[i] = i;
		i++;
	}
	
	str[0] = "Hello";
	str[1] = "world";
	str[2] = "!";
	
	i = 0;
	while (i < int_str.size())
	{
		std::cout << int_str[i];
		if (i != int_str.size() - 1)
			std::cout << ", ";
		i++;
	}
	std::cout << std::endl << std::endl;
	
	i = 0;
	while (i < str.size())
		std::cout << str[i++] << " ";
	std::cout << std::endl << std::endl;

	copy_int_str = int_str;
	copy_str = str;

	copy_int_str[3] = 25;
	copy_str[2] = "?";

	std::cout << "Copy tests" << std::endl << std::endl << "-------------------------------" << std::endl << std::endl;

	i = 0;
	while (i < int_str.size())
	{
		std::cout << int_str[i];
		if (i != int_str.size() - 1)
			std::cout << ", ";
		i++;
	}
	std::cout << std::endl << std::endl;

	i = 0;
	while (i < copy_int_str.size())
	{
		std::cout << copy_int_str[i];
		if (i != copy_int_str.size() - 1)
			std::cout << ", ";
		i++;
	}
	std::cout << std::endl << std::endl;

	i = 0;
	while (i < str.size())
		std::cout << str[i++] << " ";
	std::cout << std::endl << std::endl;

	i = 0;
	while (i < copy_str.size())
		std::cout << copy_str[i++] << " ";
	std::cout << std::endl << std::endl;
}