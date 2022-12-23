/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:19:10 by sukwon            #+#    #+#             */
/*   Updated: 2022/11/14 20:17:24 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_res(const char *str)
{
	int		i;
	long	res;
	int		sign;

	sign = 1;
	i = 0;
	res = 0;
	while ((str[i] >= 8 && str[i] <= 13) || str[i] == 32)
		i++;
	while ((str[i] == 45 || str[i] == 43) && str[i + 1] > 47 && str[i + 1] < 58)
	{
		if (str[i] == 45)
			sign = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (sign * res);
}

int	ft_atoi(const char *str)
{
	long	result;

	result = check_res(str);
	if (result)
	{
		if (result < -2147483649)
			return (0);
		else if (result > 2147483647)
			return (-1);
	}
	return (result);
}
//// while (str[i] <= 32 && str[i] >= 0 )//' 'space is 20 in  ascii
//i++;
//it will give &&command to str 45 || str 43 the both side
// 	while (str[i] >= 48 && str[i] <= 57)
// {
// 	res = res * 10 + (str[i] - 48);
// 		//result will be store until the loop ends
// 	i++;
/*원래 원본... 25넘으면 안되서 */
// int	ft_atoi(const char *str)
// {
// 	int		i;
// 	long	res;
// 	int		sign;
// 	sign = 1;
// 	i = 0;
// 	res = 0;
// 	while ((str[i] >= 8 && str[i] <= 13)|| str[i] == 32)
// 		i++;
// 	while ((str[i] == 45 || str[i] == 43) && str[i + 1] > 47 && str[i + 1] < 58)
// 	{
// 		if (str[i] == 45)
// 			sign = -1;
// 		i++;
// 	}
// 	while (str[i] >= 48 && str[i] <= 57)
// 	{
// 		res = res * 10 + (str[i] - 48);
// 		i++;
// 		if (check_res(s) < -2147483649)
// 			return (0);
// 		else if (check_res(s)> 2147483647)
// 			return (-1);
// 	}
// 	return (sign * res);
// }