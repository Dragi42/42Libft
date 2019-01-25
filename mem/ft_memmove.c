/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 22:18:47 by dpaunovi          #+#    #+#             */
/*   Updated: 2016/12/04 13:59:22 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*c1;
	unsigned char	*c2;

	c1 = (unsigned char *)dst;
	c2 = (unsigned char *)src;
	if (len == 0 || dst == src)
		return (dst);
	if (dst > src)
	{
		while (len--)
			c1[len] = c2[len];
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
