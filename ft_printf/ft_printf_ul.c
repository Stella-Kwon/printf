/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ul.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 14:47:04 by sukwon            #+#    #+#             */
/*   Updated: 2023/01/08 22:58:18 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_unsigned_long(unsigned long n)
{
	int	length;

	length = 1;
	if (0 <= n && n < 10)
		put_char(48 + n);
	if (10 <= n)
	{
		length += put_unsigned_long(n / 10);
		put_unsigned_long(n % 10);
	}
	return (length);
}
