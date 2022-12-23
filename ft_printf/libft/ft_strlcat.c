/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:49:41 by sukwon            #+#    #+#             */
/*   Updated: 2022/11/14 13:45:56 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;

	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (srclen);
	dstlen = ft_strlen(dst);
	if (dstlen >= dstsize)
		return (dstsize + srclen);
	if (srclen < dstsize - dstlen)
		ft_memcpy(dst + dstlen, src, srclen + 1);
	else if (srclen >= dstsize - dstlen)
	{
		ft_memcpy(dst + dstlen, src, dstsize - dstlen - 1);
	}
	*(dst + dstsize - 1) = '\0';
	return (dstlen + srclen);
}
// #include "libft.h"

// size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
// {
// 	size_t	i;
// 	size_t	destlen;
// 	size_t	srclen;

// 	i = 0;
// 	destlen = ft_strlen(dest); 
// 	srclen = ft_strlen(src);
// 	//    if(destlen == 0)
// 	//         exit;
// 	if(!(src = dest))
// 	{
// 		if (dstsize == 0 || dstsize <= destlen)
// 			return (dstsize + srclen);
// 		while (src[i] && destlen + i + 1 < dstsize)
// 		{
// 			dest[destlen + i] = src[i];
// 			i++;
// 		}
// 	}
// 	if(dstsize > 0)
// 		dest[destlen + i] = 0;
// 	return (destlen + srclen);
// }

// int	main(void)
// {
// 	char *restrict dst;
// 	dst = malloc(sizeof(char) * 50);
// 	const char *restrict src;
// 	src = malloc(sizeof(char) * 30);
// 	//size_t n;

// 	dst = "rewwe";
// 	src = "123456";
// 	printf(" %s\n", dst);
// 	printf(" %s\n", src);
// 	// n = ;
// 	if (!src)
// 		printf("didnt find memory for src");
// 	if (!dst)
// 		printf("didnt find memory for dst");

// 	printf("dst: %s\tsrc: %s\t size_t: %zu\n", dst, src, strlcat(dst, src, 4));
// 	printf(" \n");
// 	//printf("dst: %s\tsrc: %s \t size_t: %zu\n", dst, src, strlcat(dst,
				//src,1));
				// 	printf(" \n");
				// 	printf("dst: %s\tsrc: %s\t size_t: %zu\n", dst, src,
							//ft_strlcat(dst, src,4));
				// 	printf(" \n");
				// 	//printf("dst: %s\tsrc: %s \t size_t: %zu\n", dst, src,
				//ft_strlcat(dst,src,1));

				// 	return (0);
				// }