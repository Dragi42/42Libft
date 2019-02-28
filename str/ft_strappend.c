/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 11:37:10 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/02/11 12:27:13 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_strappend(char **s1, char const *s2)
{
	char		*dst;

    dst = ft_strjoin(*s1, s2);
	if (dst != NULL)
	{
        free(*s1);
        *s1 = ft_strdup(dst);
        ft_strdel(&dst);
	}
	return;
}