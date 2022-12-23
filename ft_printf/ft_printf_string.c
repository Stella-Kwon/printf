/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 14:47:00 by sukwon            #+#    #+#             */
/*   Updated: 2022/12/21 16:30:40 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_str(char *str)
{
	int	length;
	
	length = 0;
	if (!str)
	{
		write(1, "(null)", 1);
		return (1);
	}
	length = ft_strlen(str);
	write(1, str, length);
	return(length);
}