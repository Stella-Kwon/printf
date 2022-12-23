/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 23:11:04 by sukwon            #+#    #+#             */
/*   Updated: 2022/11/14 13:53:37 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			n;
	unsigned int	i;
	char			*temp;

	if (!s || !f)
		return (NULL);
	n = ft_strlen(s);
	i = 0;
	temp = (char *)malloc(n + 1);
	if (!temp)
		return (NULL);
	while (i < n)
	{
		temp[i] = f(i, s[i]);
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
// char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
// {
// 	size_t	i;
// 	size_t	n;
// 	char	*temp;

// 	if (!s || !f)
// 		return (0);
// 	i = 0;
// 	n = ft_strlen(s);
// 	if (!(temp = (char *)malloc((sizeof(char) * n) + 1)))
//위에 저렇게 해주니까멜록이 안됌...sizeof(char)해줬다고....왠지 모르겠음..
// 		return (0);
// 	while (n--) 
// 	{
// 		*temp++ = (f)(i, s[i]); //이렇게 해주니까 멜록에서 문제가 생겨버림. 왤까. 혼동이 되나 
// 		i++;
// 	}
// 	*temp = '\0'; 
// 	return (&temp[0]);
// }