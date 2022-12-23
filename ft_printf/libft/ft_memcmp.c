/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:20:55 by sukwon            #+#    #+#             */
/*   Updated: 2022/11/14 12:55:08 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*point_s1;
	unsigned char	*point_s2;

	point_s1 = (unsigned char *)s1;
	point_s2 = (unsigned char *)s2;
	while (n--)
	{
		if (*point_s1 != *point_s2)
			return (*point_s1 - *point_s2);
		point_s1++;
		point_s2++;
	}
	return (0);
}

//const형태일 때는 a = b 할때 타입캐스트로 바꿔줘도 가능하지않아.
//언제나 a는 콘스트가 아니어야한다.