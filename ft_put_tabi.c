/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_tabi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmuller <fmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 18:25:03 by fmuller           #+#    #+#             */
/*   Updated: 2016/11/25 18:41:48 by fmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_put_tabi(int *tab, int end)
{
	size_t	n;

	n = 0;
	while (tab[n] != end)
	{
		ft_putnbr(tab[n]);
		ft_putchar('\n');
		n++;
	}
}
