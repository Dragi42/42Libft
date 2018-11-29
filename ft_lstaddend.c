/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 19:24:57 by dpaunovi          #+#    #+#             */
/*   Updated: 2017/11/27 21:47:44 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddend(t_list **lst, void const *content, size_t content_size)
{
	t_list	*tmp;

	tmp = *lst;
	while (tmp)
		tmp = tmp->next;
	tmp = ft_lstnew(content, content_size);
}
