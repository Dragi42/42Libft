/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_file_content.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 12:47:44 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/02/11 12:47:53 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*get_file_content(char *file_name) {
	int		fd;
	int		rd;
	int		buff_size;
	char	*buff;
	char	*content;

	buff_size = 1;
	buff = ft_strnew(buff_size + 1);
	content = ft_strnew(0);
	fd = open(file_name, O_RDONLY);
	while ((rd = read(fd, buff, buff_size)) > 0)
	{
		buff[rd] = '\0';
		ft_strappend(&content, buff);
	}
	ft_strdel(&buff);
	close(fd);
	return (content);
}