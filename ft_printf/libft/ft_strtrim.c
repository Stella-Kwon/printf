/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 23:10:11 by sukwon            #+#    #+#             */
/*   Updated: 2022/11/14 21:22:06 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*temp;
	char	*start;
	char	*end;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	start = (char *)s1;
	end = start + ft_strlen(s1) - 1;
	while (*start && find_set(*start, set))
		start++;
	if (*start == '\0')
		return (ft_strdup(""));
	while (*end && find_set(*end, set))
		end--;
	len = end - start + 1;
	temp = (char *)malloc(sizeof(char) * len + 1);
	if (!temp)
		return (NULL);
	ft_strlcpy(temp, start, len + 1);
	return (temp);
}
