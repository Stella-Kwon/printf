/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:07:08 by sukwon            #+#    #+#             */
/*   Updated: 2022/11/06 17:30:17 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// int main(void)
// {
//     int c ;
//     c = 135;
//     char v;
//     v = 'a';
//     printf("%d", ft_isascii(c));
//     printf("%d", ft_isascii(v));
//     printf("%d", isascii(c));
//     printf("%d", isascii(v));
//     return(0);
// }