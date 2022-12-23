/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 23:14:43 by sukwon            #+#    #+#             */
/*   Updated: 2022/11/14 13:42:01 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	len;

	if (!s || fd < 0)
		return ;
	len = ft_strlen(s);
	write(fd, s, len);
}
// void	ft_putstr_fd(char *s, int fd)
// {
// 	if (!s || fd < 0)
// 		return ;
// 	while (s++)
// 		ft_putchar_fd(*s, fd);		//계속 열렸다가 닫히고... 오래걸림
// }