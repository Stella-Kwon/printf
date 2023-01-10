/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 14:46:56 by sukwon            #+#    #+#             */
/*   Updated: 2023/01/09 12:37:49 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	put_hex_ptr(unsigned long long n)
{
	int	length;

	length = 1;
	if (0 <= n && n < 16)
	{
		if (n < 10)
			put_char('0' + n);
		if (10 <= n && n < 16)
			put_char(('a' - 10) + n);
	}
	if (16 <= n)
	{
		length += put_hex_ptr(n / 16);
		//그리고 나눌때마다 한번씩 들어가서 써지기 때문에 length 로 +1되는것이나 마찬가지. 그리고 16나누고 나머지 값을 써주는것을 생각해서 +1 해준것.
		//이렇게하면 temp값이 put_hex에 저장되기에 저장이 가능..? 그래서length 가 1이어도 그값이 함수에 저장되어있어 1씩 커지는것.
		put_hex_ptr(n % 16);
	}
	return (length);
}

int	put_ptr(void *n)
{
	int	length;

	put_char('0');
	put_char('x');
	length = 2;
	length += put_hex_ptr((unsigned long long) n);
	return (length);
}
