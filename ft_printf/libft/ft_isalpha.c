/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 14:23:43 by sukwon            #+#    #+#             */
/*   Updated: 2022/11/06 17:30:15 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
//이상하게 ascii번호로 하면 안되고....  char 로 ㅁㅔ인에 숫자든 뭐든 쓰고...해도 안되는듯..
// int main(void)
// {
//     char c;
//     c = '+';
//     printf("if there is ft_isalpha, returns %d\n", ft_isalpha(c));
//     printf("if there is isalpha, returns %d", isalpha(c));
//     return(0);
// }