/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 22:18:47 by dpaunovi          #+#    #+#             */
/*   Updated: 2016/12/01 18:45:51 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *c1;
	unsigned char *c2;

	if (n == 0 || dst == src)
		return dst;
	c1 = (unsigned char *)dst;
	c2 = (unsigned char *)src;
	while (--n)
		*c1++ = *c2++;
	*c1 = *c2;
	return dst;
}
