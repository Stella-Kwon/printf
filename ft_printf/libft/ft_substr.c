/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 19:06:52 by sukwon            #+#    #+#             */
/*   Updated: 2022/12/11 14:18:41 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	get_min(size_t len, unsigned int max)
{
	if (len < max)
		return (len);
	else
		return (max);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*temp;
	unsigned int	min;
	unsigned int	slen;
	unsigned int	i;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (slen <= start || len == 0)
		return (ft_strdup(""));
	min = get_min(len, slen - start);
	temp = (char *)malloc(sizeof(char) * min + 1);
	if (!temp)
		return (NULL);
	i = 0;
	while (i < min)
		temp[i++] = s[start++];
	temp[i] = '\0';
	return (temp);
}
// static unsigned int	ft_min(unsigned int a, unsigned int b)
// {
// 	if (a < b)
// 		return (a);
// 	else
// 		return (b);
// }

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	unsigned int	i;
// 	unsigned int	slen;
// 	char			*temp;

// 	if (!s)
// 		return (NULL);
// 	slen = (unsigned int)ft_strlen(s);
// 	if (slen <= start || len == 0)
// 		return (ft_strdup(""));
// 	i = 0;
// 	if (!(temp = (char *)malloc(ft_min((unsigned int)len, slen - start) + 1)))
// 		return (NULL);
// 	while (s[start] != '\0' && i < len) //len 로 해도 무관 앞에 눌터미네이터 전까지라고 명시되어있어서
// 		temp[i++] = s[start++];
// 	temp[i] = '\0';
// 	return (temp);
// }