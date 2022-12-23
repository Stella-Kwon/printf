/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:21:58 by sukwon            #+#    #+#             */
/*   Updated: 2022/11/14 13:38:10 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (*(src + i) != '\0' && i < (dstsize - 1))
	{
		*dst = *(src + i);
		dst++;
		i++;
	}
	*dst = '\0';
	return (ft_strlen(src));
}
//#include "libft.h"

//size_t ft_strlcpy(char *restrict dst, 
//const char *restrict src, size_t dstsize)
// {
// 	size_t len; 
// 	size_t len2;
// 	size_t dstlen;
// 	size_t i;

// 	len = ft_strlen(src);
// 	len2 = ft_strlen(dst);
// 	i = 0;
// 	if (!dstsize || !src) //이렇게하면 ,..segment fault 나와야한데..아니 0라 NULL 인데..
// 		return (0);
// 	while (i < len && i + 1 < dstsize && !(len2 + 1 >= dstsize))
// 	{
// 		dst[i] = src[i];
// 		i++;
// 	}
// 	dst[i] = '\0';
// 	dstlen = ft_strlen(dst);
// 	return (dstlen);
//}

// int	main(void)
// {
// 	char *restrict d;
// 	d = malloc(sizeof(char) * 30);
// 	const char *restrict s;
// 	s = "This is ft_strlcpy.";
// 	size_t n;
// 	n = 30; //데스티네이션 활용공간보다 클 수 없음. 소스보단 커야해.
// 	printf("%zu", ft_strlcpy(d, s, n));
// 	printf("%lu", strlcpy(d, s, n));
// 	return (0);
// }