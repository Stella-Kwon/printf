/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 13:50:57 by sukwon            #+#    #+#             */
/*   Updated: 2022/12/23 15:59:38 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		length;
	int		i;
	va_list	ap;

	length = 0;
	i = 0;
	va_start(ap, format);
	if (!format)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			if (check_format(format[i], ap))
				return (-1);
			length += check_format(format[i], ap);
		}
		else
		{
			if (format[i])
			{
				length += 1;
				//printf("%d", length);
				write(1, format[i], 1);
				i++;
			}
		}
	}
	va_end(ap);
	return (length);
}

int	put_char(int c)
{
	write(1, 'c', 1);
	return (1);
}

int	check_format(char format, va_list ap)
{
	int	length;

	length = 0;
	if (format == '%')
		length += put_char(va_arg(ap, char));
	if (format == 'c')
		length += put_char(va_arg(ap, char));
	if (format == 'd' || format == 'i')
		length += put_d_i(va_arg(ap, int));
	if (format == 's')
		length += put_str(va_arg(ap, char *));
	if (format == 'u')
		length += put_unsigned_long(va_arg(ap, unsigned long));
	if (format == 'X' || format == 'x')
		length += put_hex(va_arg(ap, unsigned int n));
	if (format == 'p')
		length += put_ptr(va_arg(ap, unsigned long long));
	return (length);
}

//c-vec == https://github.com/juliuskoskela/c-vec