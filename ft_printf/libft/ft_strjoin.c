/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 23:05:47 by sukwon            #+#    #+#             */
/*   Updated: 2022/11/14 19:43:00 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*temp;

	if (!s1 && !s2)
		return (NULL);
	if (s1 && !s2)
		return ((char *)s1);
	if (!s1 && s2)
		return ((char *)s2);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	temp = (char *)malloc(sizeof(char) * (s1_len + s2_len) + 1);
	if (!temp)
		return (NULL);
	ft_strlcpy(temp, s1, s1_len + 1);
	ft_strlcat(temp, s2, s1_len + s2_len + 1);
	return (temp);
}
// char	*ft_strjoin(char const *s1, char const *s2)
// {
// 	size_t	s1_len;
// 	size_t	s2_len;
// 	char	*temp;
// 	if (!s1 && !s2)
// 		return (NULL);
// 	if (s1 && !s2)
// 		return ((char *)s1); //const 라 리턴할때 char*로 타입캐스트해주기
//return (ft_strdup(s1)); //복사해주는 방법도 있는데... 이건 더 오래걸릴듯
// 	if (!s1 && s2)
// 		return ((char *)s2);
//return (ft_strdup(s2));
// 	s1_len = ft_strlen(s1);
// 	s2_len = ft_strlen(s2);
// 	temp = (char *)malloc(sizeof(char) * (s1_len + s2_len) + 1);
// 	if(!temp)
// 		return(NULL);
// 	ft_strlcat((char *)s1, (char *)s2,(s1_len + s2_len) + 1);
// 	//이렇게하면 const라 바로 못이어붙혀서 타입캐스트 해줘야하는것도 있꼬,
//그리고 혹시 s1과 s2오버랩핑을 생각해서 temp에 먼저 s1을 복사해주고 연결
// 	ft_strlcpy(temp,s1,(s1_len + s2_len) + 1);
// 	return(temp);
// }