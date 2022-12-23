/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 23:13:41 by sukwon            #+#    #+#             */
/*   Updated: 2022/11/13 19:19:23 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nbr;

	if (fd < 0)
		return ;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	nbr = n;
	if (nbr >= 10)
		ft_putnbr_fd((nbr / 10), fd);
	ft_putchar_fd((nbr % 10) + '0', fd);
}
// if (n == -2147483648)
// {
// 	ft_putchar_fd('-', fd);
// 	ft_putchar_fd('2', fd);
// 	ft_putnbr_fd(147483648,fd);
// } 이걸로는 왜 안되는지 모르겠음...ㅎㅎㅎ

// void	ft_putnbr_fd(int n, int fd)
// {
// 	long long int	nbr;

// 	if (fd < 0)
// 		return ;
// 	nbr = n;
// 	if (nbr < 0)
// 	{
// 		ft_putchar_fd('-', fd);
// 		nbr *= -1;
// 	}
// 	if (nbr >= 10)
// 		ft_putnbr_fd(nbr / 10, fd);
// 	ft_putchar_fd((nbr % 10) + '0', fd);
// }