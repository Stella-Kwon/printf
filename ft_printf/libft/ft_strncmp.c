/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:48:30 by sukwon            #+#    #+#             */
/*   Updated: 2022/11/11 00:46:07 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (!n)
		return (0);
	i = 0;
	while (*(s1 + i) && *(s2 + i) && i < n)
	{
		if (*(s1 + i) != *(s2 + i))
			return ((unsigned char)*(s1 + i) - (unsigned char)*(s2 + i));
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)*(s1 + i) - (unsigned char)*(s2 + i));
}
// static ft_compare(char *a,  char *b)
// {

// 	return((unsigned char)a - (unsigned char)b);
// }

// int	ft_strncmp(const char *s1, const char *s2, size_t num)
// {
// 	size_t i;
// 	size_t j;

// 	i = 0;
// 	while (*s1 && i < num)
// 	{
// 		j = 0;
// 		while (s1[i + j] == s2[j] && s2[j] && i + j < num)
// 		{
// 			if (s2[j + 1] == '\0'||s1[j + 1] == '\0')
// 				return (0);
// 			j++;
// 		}
// 		i++;
// 	}
// 	// while (i < num && a[i] == b[i] && (a[i] && b[i]))
// 	// {
// 	// 	i++;
// 	// }
// 	if (s1[i] != s2[i])
// 	{
// 		return (s1[i]-s2[i]);
// 	}
// 	return (0);
// }
// #include <stddef.h> // to use datatype of size_t
//size_t is the type returned by the sizeof operator
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     const char a[] = "hello";
//     const char b[] = "7elln";
//     size_t num = 2;
//     printf("%d\n",ft_strncmp(a,b,num));
//     printf("%d",strncmp(a,b,num));
//     return(0);
// }