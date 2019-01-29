/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 15:10:58 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/29 15:43:14 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *s)
{
	int len;
	int result;
	int neg;

	len = 0;
	result = 0;
	neg = 0;
	while (*s && (ft_iswhitespace(*s) || (*s == '-' && ft_isdigit(s[1])) ||
				(*s == '+' && ft_isdigit(s[1]))))
		if (*(s++) == '-')
			neg = 1;
	while (*s == '0')
		s++;
	while (ft_isdigit(s[len]))
		len++;
	if (len > 10)
		return (neg ? 0 : -1);
	while (ft_isdigit(*s))
		result = (result * 10) + (*(s++) - '0');
	return (neg ? -result : result);
}
