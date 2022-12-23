/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:20:59 by sukwon            #+#    #+#             */
/*   Updated: 2022/11/14 12:54:02 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*temp;

	temp = (unsigned char *)s;
	while (n--)
	{
		if (*temp == (unsigned char)c)
			return ((void *)temp);
		temp++;
	}
	return (NULL);
}
// unsigned char	*temp; //const void 라 따로 포이터 필요
// temp = (unsigned char*)s; //cast 하기 편하ㄹㅏ고 준거같고

// void    *ft_memchr(const void *s, int c, size_t n)
// {
// 	size_t	i;

// 	i = 0;
// 	while (i < n)
// 	{
// 		if ((unsigned const char *)s[i] = (unsigned char)c)
// 			return (*(const void *)&(s+i));
// 		i++;
// 	}
// 	return (0);
// }