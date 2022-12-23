/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 21:16:58 by sukwon            #+#    #+#             */
/*   Updated: 2022/11/14 12:53:43 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
//return (c + 32); //c -'A' + 'a')
// int main(void)
// {
//     unsigned char c;
//     c = 'A';
//     printf("%c\n",ft_tolower(c));
//     printf("%c",tolower(c));
//     return(0);
// }