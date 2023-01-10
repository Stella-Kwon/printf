/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 14:47:00 by sukwon            #+#    #+#             */
/*   Updated: 2023/01/09 10:47:58 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_str(char *str)
{
	int	length;

	length = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while(str[length] != '\0')
	/*printf("%s%s%s","\0",""," - "); =>" - " only got out*/
	{
		write(1, &str[length], 1); 
		length++;
	}
	// length = ft_strlen;
	// /*error: incompatible pointer to integer conversion
    //   assigning to 'int' from 'size_t (const char *)' (aka 'unsigned long
    //   (const char *)') [-Werror,-Wint-conversion]
    //     length = ft_strlen;*/
	// write(1, str, length);
	return (length);
}
