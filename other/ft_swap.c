/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 20:27:33 by dpaunovi          #+#    #+#             */
/*   Updated: 2016/11/29 20:36:12 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swap(char a, char b)
{
	char	tmp;

	if (a != b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
}
