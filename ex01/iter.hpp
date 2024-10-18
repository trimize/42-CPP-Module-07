/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 11:13:38 by to                #+#    #+#             */
/*   Updated: 2024/09/13 16:30:09 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>

template <typename T>

void	iter(T *array, size_t len, void(*f)(T &))
{
	size_t i = 0;

	if (len == 0 || !array)
		return ;
	while (i < len)
		f(array[i++]);
}

#endif