/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:29:14 by sukwon            #+#    #+#             */
/*   Updated: 2022/11/14 13:54:36 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_str(char *str, char *substr)
{
	while (*substr)
	{
		if (*str != *substr)
			return (0);
		str++;
		substr++;
	}
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;
	size_t	haystack_len;

	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	haystack_len = ft_strlen(haystack);
	if (len != 0 || haystack_len != 0)
	{
		i = 0;
		while (i < haystack_len && i <= (len - ft_strlen(needle)))
		{
			if (find_str((char *)haystack + i, (char *)needle))
				return ((char *)haystack + i);
			i++;
		}
	}		
	return (NULL);
}
//i <= (len - ft_strlen(needle)))needle보다 작으면 안되기때문에. 그럼 전체다파악 x
//return ((char *)&s1[i]);
//&will give you the address,pointing to it and will give you the value
//char *s1 = (char *)a;//need to typecast it again to change
// char *s2 = (char *)b;
//more  understanding about  ->
//strstr https://www.geeksforgeeks.org/strstr-in-ccpp/
// int main(void)
// {
//     const char *largestring = "Foo Bar Baz";
// 	const char *smallstring = "Bar";
// 	char	*ptr;

// 	ptr = strnstr(largestring, smallstring, 2);
//     printf("%s\n", ft_strnstr(largestring,smallstring,2));
//     printf("%s", ptr);
//     return (0);
// }
//*******************//
// char *ft_strnstr(const char *haystack, const char *needle, size_t len)
// {
// 	size_t j
// 	return(NULL);
// }
// char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
// {
// 	size_t	i;
// 	size_t	j;

// 	i = 0;
// 	if (needle[0] == '\0' || len == 0)
// 		return ((char *)haystack);
// 	while (haystack[i] != '\0' && i < len)
// 	{
// 		j = 0;
// 		while (needle[j] == haystack[i + j] && i + j < len)
// 		{
// 			j++;
// 			if (needle[j] == '\0')
// 			{
// 				return ((char *)haystack + i);
// 			}
// 		}
// 		i++;
// 	}
// 	return (NULL);
// }
