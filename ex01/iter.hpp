/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: to <to@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 11:13:38 by to                #+#    #+#             */
/*   Updated: 2024/09/13 11:46:26 by to               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>

template<typename T>

void	iter(T *array, size_t len, void(*f)(T &))
{
	size_t i = 0;

	if (len == 0 || !array)
		return ;
	while (i < len)
		f(array[i++]);
}

#endif