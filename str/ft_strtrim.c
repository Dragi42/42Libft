/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 18:49:51 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/29 15:51:24 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*s1;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (*s && ft_iswhitespace(*s))
		s++;
	if (*s == '\0')
		return (ft_strdup(s));
	i = ft_strlen((char *)s);
	while (i > 0 && ft_iswhitespace(s[i - 1]))
		i--;
	if (!(s1 = ft_strnew(i)))
		return (NULL);
	ft_strncpy(s1, s, i);
	if (s1)
		s1[i] = '\0';
	return (s1);
}
