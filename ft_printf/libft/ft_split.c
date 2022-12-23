/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 23:09:38 by sukwon            #+#    #+#             */
/*   Updated: 2022/11/22 22:45:52 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_strs(char const *s, char c)
{
	int		i;
	int		cnt_strs;

	i = 0;
	cnt_strs = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			cnt_strs++;
			while (s[i] && (s[i] != c))
				i++;
		}
		else
			i++;
	}
	return (cnt_strs);
}

static int	get_str_character(char **s, int len, char c)
{
	int		i;

	i = 0;
	*s += len;
	while (**s && **s == c)
		(*s)++;
	while ((*s)[i])
	{
		if ((*s)[i] == c)
			break ;
		i++;
	}
	return (i);
}

static char	**allfree(char **result)
{
	int		i;

	i = 0;
	while (result[i])
	{
		free(result[i]);
		result[i] = NULL;
		i++;
	}
	free(result);
	result = NULL;
	return (NULL);
}

char		**ft_split(char const *s, char c)
{
	int		cnt_strs;
	char	**result;
	int		i;
	char	*str;
	int		str_len;

	if (!s)
		return (NULL);
	cnt_strs = count_strs(s, c);
	//result = (char **)malloc(sizeof(char *) * (cnt_strs + 1)); 대신 캘록
	result = (char **)calloc((cnt_strs + 1), sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	str = (char *)s;
	str_len = 0;
	while (i < cnt_strs)
	{
		str_len = get_str_character(&str, str_len, c);
		result[i] = (char *)malloc(str_len + 1);
		if (!result[i])
			return (allfree(result));
		ft_strlcpy(result[i], str, str_len + 1);
		i++;
	}
	//result[i] = NULL;
	return (result);
}