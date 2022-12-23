/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:20:36 by sukwon            #+#    #+#             */
/*   Updated: 2022/11/14 12:57:37 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = -1;
	while (++i < len)
		*(unsigned char *)(b + i) = (unsigned char)c;
	return ((void *)b);
}
//while 에서는 이상하게 맞게  i = 0 후에 
//while (i++< len)주면 그냥 그게 0으로 쓰여지고 띈담에 담부터 같이 들어가지지 않아서.....ㅇㅣ상함 