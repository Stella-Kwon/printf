/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 23:09:03 by sukwon            #+#    #+#             */
/*   Updated: 2022/11/14 20:17:11 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_length(int n)
{
	unsigned int	nbr;
	unsigned int	count;

	if (n == 0)
		return (1);
	count = 0;
	if (n < 0)
	{
		count = 1;
		n *= -1;
	}
	nbr = n;
	while (nbr)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

static int	nbr_sign(int n)
{
	if (n < 0)
		return ((unsigned int)(n * -1));
	else
		return ((unsigned int)n);
}

char	*ft_itoa(int n)
{
	unsigned int	nbr;
	unsigned int	len;
	char			*str;
	int				sign;

	sign = 1;
	if (n < 0)
		sign = -1;
	len = find_length(n);
	nbr = nbr_sign(n);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (0);
	str[len--] = '\0';
	while (len > 0)
	{
		str[len] = (nbr % 10) + '0';
		nbr /= 10;
		len--;
	}
	if (sign == -1)
		str[0] = '-';
	else
		str[0] = (nbr % 10) + '0';
	return ((char *)str);
}
/*1번째*/
// char	*ft_itoa(int n)
// {
// 	unsigned int	nbr;
// 	unsigned int	i;
// 	unsigned int	len;
// 	char			*str;

// 	len = find_length(n);
// 	if (!(str == (char *)malloc(sizeof(char) * len + 1)))
// 		return (0);
// 	i = 0;
// 	if (n < 0)
// 	{
// 		str[i] = '-';
// 		i++;
// 		n *= -1;
// 	}
// nbr = n;
// if (nbr >= 10)
// ft_itoa(nbr / 10); //너무 많이 돌아가기때문에.. 이것보다는 위에게 속도가 더 빠를듯.
// str[i] = (nbr % 10) + '0';
// i++;
// if (i == len)
// str[i] = '\0';
// return ((char *)str);

/*2번쨰방법*/
// static	unsigned int	ft_abs(int n)
// {
// 	if (n > 0)
// 		return ((unsigned int)n);
// 	else
// 		return ((unsigned int)(n * -1));
// }

// static int				ft_get_len(unsigned int nbr, int sign)
// {
// 	int					len;

// 	len = 0;
// 	if (sign == -1)
// 		len = 1;
// 	if (nbr == 0)
// 		return (1);
// 	while (nbr)
// 	{
// 		nbr /= 10;
// 		len++;
// 	}
// 	return (len);
// }

// char					*ft_itoa(int n)
// {
// 	int					sign;
// 	unsigned int		nbr;
// 	int					len;
// 	char				*temp;

// 	sign = 1;
// 	if (n < 0)
// 		sign = -1;
// 	nbr = ft_abs(n);
// 	len = ft_get_len(nbr, sign);
// 	if (!(temp = (char *)malloc(len + 1)))
// 		return (NULL);
// 	temp[len--] = '\0';
// 	while (len > 0)
// 	{
// 		temp[len] = '0' + (nbr % 10);
// 		nbr /= 10;
// 		len--;
// 	}
// 	if (sign == -1)
// 		temp[0] = '-';
// 	else
// 		temp[0] = '0' + (nbr % 10);
// 	return (temp);
// }
// /*3번째*/
// int	find_length(int n)
// {
// 	unsigned int	nbr;
// 	unsigned int	count;

// 	count = 0;
// 	if (n == 0)
// 		return (1);
// 	if (n < 0)
// 	{
// 		n *= -1;
// 		count++;
// 	}
// 	nbr = n;
// 	if (nbr)
// 	{
// 		find_length(nbr / 10);//재귀용법은 count 셀때는 사용불가, ++가 안도ㅐ.
// 		count++;
// 	}
// 	return (count);
//}