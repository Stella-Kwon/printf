/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:45:58 by sukwon            #+#    #+#             */
/*   Updated: 2022/11/06 17:30:11 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
// if ((c > '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a'
			//&& c <= 'z'))
// 	return (1);
// return (0);
// int main(void)
// {
//     char c;
//     c = 105;
//     printf("%d\n",ft_isalnum(c));
//     printf("%d",isalnum(c));
//     return(0);
// }
