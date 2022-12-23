/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 23:15:35 by sukwon            #+#    #+#             */
/*   Updated: 2022/11/14 13:45:03 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
// void	ft_putendl_fd(char *s, int fd)
// {
// 	size_t	len;

// 	if (!s || fd < 0)
// 		return ;
// 	len = ft_strlen(s);
// 	write(fd, s, len);
// 	write(fd, "\n", 1);
// }