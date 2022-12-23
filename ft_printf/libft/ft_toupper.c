/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 21:16:54 by sukwon            #+#    #+#             */
/*   Updated: 2022/11/14 12:53:20 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
//return (c - 32); // (c - 'A' + 'a')
// int main(void)
// {
//     unsigned char c;
//     c = '5';
//     printf("%c\n",ft_toupper(c));
//     printf("%c",toupper(c));
//     return(0);
// }