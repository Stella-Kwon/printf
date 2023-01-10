/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ul.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 14:47:04 by sukwon            #+#    #+#             */
/*   Updated: 2023/01/10 11:50:49 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_unsigned_int(unsigned int n) 
/*unsigned long only allows you 0-uint_max. 
in the printf function it should allow and gives you the minum number you can print, and if it over the limit than prints the max number it can hold.
For max for example, as the specifier is %u = unsigned long ( 0 - 4,294,967,295).
so any number that is lower than 0, should be printed out 0. 
so any number that is upper than 4294967295, should be printed out 4294967295.*/
{
	int	length;

	length = 1;
	// if (n < 0)
	// {
	// 	put_char(48 + '0');
	// 	return (length);
	// }
	// if (4294967295 < n)//USING ULONG_MAX HERE THROUGH limit.h doesnt work. need to explicitly write it. 
	// {
	// 	length += put_unsigned_long(4294967295);
	// 	return (length);
	// }
	if (0 <= n && n < 10)
		put_char(48 + n);

	if ( n >= 10 ) 
	{
		length += put_unsigned_int(n / 10);
		put_unsigned_int(n % 10);
	}
	return (length);
}


// 4294967295
//
// /= base(16)
//
//