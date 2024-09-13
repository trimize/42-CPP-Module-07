/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 16:18:30 by trimize           #+#    #+#             */
/*   Updated: 2024/09/13 17:14:42 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>

class Array
{
	private :
		T	*data;
		unsigned int	len;

	public :
		Array();
		Array(const unsigned int n);
		Array(const Array &a);
		~Array();
		Array	&operator=(const Array	&a);
		T	&operator[](unsigned int n);
		unsigned int	size();
};

template <typename T>

Array<T>::Array(void) : data(NULL), len(0)
{
	
}

template <typename T>

Array<T>::Array(const unsigned int n) : data(new T[n]), len(n)
{
	
}

template <typename T>

Array<T>::~Array()
{
	delete[]this->data;
}

template <typename T>

Array<T>::Array(const Array &a)
{
	unsigned int	i = 0;
	this->data = new T[a.len];
	while (i < a.len)
	{
		this->data[i] = a.data[i];
		i++;
	}
	this->len = a.len;
}

template <typename T>

Array<T>	&Array<T>::operator=(const Array &a)
{
	if (this == &a)
		return (*this);
	if (this->len > 0)
		delete []this->data;
	unsigned int	i = 0;
	this->data = new T[a.len];
	while (i < a.len)
	{
		this->data[i] = a.data[i];
		i++;
	}
	this->len = a.len;
	return (*this);
}

template <typename T>

T	&Array<T>::operator[](unsigned int n)
{
	if (n > this->len)
		throw std::overflow_error("Index out of bounds");
	return (this->data[n]);
}

template <typename T>

unsigned int	Array<T>::size()
{
	return (this->len);
}

#endif