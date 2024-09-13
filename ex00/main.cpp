/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: to <to@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 10:54:09 by to                #+#    #+#             */
/*   Updated: 2024/09/13 11:10:30 by to               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int	main()
{
	float a = 234.234f;
	float b = 3235.123f;
	std::cout << std::endl << "Testing for floats" << std::endl << std::endl << "----------------------------------------------" << std::endl << std::endl;
	std::cout << "Min between " << a << " and " << b << " is :" << std::endl << min(a, b) << std::endl << std::endl;
	std::cout << "Max between " << a << " and " << b << " is :" << std::endl << max(a, b) << std::endl << std::endl;
	std::cout << "Swapping between the value of a and b :" << std::endl << "Value of a before swapping : " << a << std::endl << "Value of b before swapping : " << b << std::endl << std::endl;
	swap(a, b);
	std::cout << "Value of a after swapping : " << a << std::endl << "Value of b after swapping : " << b << std::endl;

	std::string c= "Bonjour";
	std::string d = "Aurevoir";
	std::cout << std::endl << "Testing for std::string" << std::endl << std::endl << "----------------------------------------------" << std::endl << std::endl;
	std::cout << "Min between " << c << " and " << d << " is :" << std::endl << min(c, d) << std::endl << std::endl;
	std::cout << "Max between " << c << " and " << d << " is :" << std::endl << max(c, d) << std::endl << std::endl;
	std::cout << "Swapping between the value of a and b :" << std::endl << "Value of c before swapping : " << c << std::endl << "Value of d before swapping : " << d << std::endl << std::endl;
	swap(c, d);
	std::cout << "Value of c after swapping : " << c << std::endl << "Value of d after swapping : " << d << std::endl;
	return (0);
}