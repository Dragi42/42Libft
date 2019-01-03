/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 17:39:39 by dpaunovi          #+#    #+#             */
/*   Updated: 2016/12/01 17:04:57 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strnlen(dst, size);
	while (len + 1 < size && src[i])
	{
		dst[len++] = src[i++];
	}
	if (len - i < size)
		dst[len] = '\0';
	return (len - i + ft_strlen(src));
}
