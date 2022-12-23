/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:44:59 by sukwon            #+#    #+#             */
/*   Updated: 2022/11/14 13:49:22 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	unsigned char	*s2;
	size_t			i;

	s2 = malloc(sizeof(char) * (ft_strlen(s1)) + 1);
	if (!s2)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return ((char *)s2);
}
// char	*ft_strdup(const char *s1)
// {
// 	size_t	i;
// 	char	*temp;

// 	if (!(temp = (char *)malloc(ft_strlen(s1) + 1))) // 충분하지 않은 메모리 할당시 0
// 		return (NULL);
// 	i = 0;
// 	while (s1[i] != '\0')
// 	{
// 		temp[i] = s1[i];
// 		i++;
// 	}
// 	temp[i] = '\0';
// 	return (temp);
// }
