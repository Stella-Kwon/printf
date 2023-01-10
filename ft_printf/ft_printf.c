/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 13:50:57 by sukwon            #+#    #+#             */
/*   Updated: 2023/01/10 11:49:21 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_char(int c)
{
	write(1, &c, 1);
	return (1);
}

static int	check_format(char format, va_list ap)
{
	int	length;

	length = 0;
	if (format == 'c')
		length += put_char(va_arg(ap, int));
	if (format == 'd' || format == 'i')
		length += put_d_i(va_arg(ap, int));
	if (format == 's')
		length += put_str(va_arg(ap, char *));
	if (format == 'u')
		length += put_unsigned_int(va_arg(ap, unsigned int));
	if (format == 'x')
		length += put_hex_low(va_arg(ap, unsigned int));
	if (format == 'X')
		length += put_hex_up(va_arg(ap, unsigned int));
	if (format == 'p')
		length += put_ptr(va_arg(ap, void *));
	if (format == '%')
		length += put_char('%');
		//length += put_char(va_arg(ap, int)); //연계되는게 아니기때문에 바로 프린트
	return (length);
}

int	ft_printf(const char *format, ...)
{
	int		length;
	int		i;
	va_list	ap;

	length = 0;
	i = 0;
	va_start(ap, format);
	 if (!format)
	 	return (0);
		// when do we need error sign...? 
		//if there is no format address or value then it would not compile in the first place??
		//actually no, it does compile when printf(NULL,"asd");, yet except for print();or printf(,"asd"); 
		//it just doesnt give any value or act. 
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			// if (check_format(format[i], ap) == -1)
			// 	return (-1); // there cannot be any error and it will repeat the function again and caused to print double tims as it called
			length += check_format(format[i], ap);
		}
		else
		{
			if (format[i])
			{
				// length += 1;
				// write(1, &format[i], 1);
				length += put_char(format[i]);
			}
		}
		i++;
	}
	va_end(ap);
	return (length);
}
//c-vec == https://github.com/juliuskoskela/c-vec