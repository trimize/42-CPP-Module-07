/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 10:41:36 by to                #+#    #+#             */
/*   Updated: 2024/09/13 16:30:15 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename S>

void	swap(S &x, S &y)
{
	S tmp;
	tmp = x;
	x = y;
	y = tmp;
}

template <typename N>

N	&min(N &x, N &y)
{
	return (x <= y ? x : y);
}

template <typename M>

M	&max(M &x, M &y)
{
	return (x >= y ? x : y);
}

#endif