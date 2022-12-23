/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:32:00 by sukwon            #+#    #+#             */
/*   Updated: 2022/11/15 17:04:00 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t count;

	count = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		lst = lst->next;
		count++;
	}	
	return (count);
}
// count = 1;이미ㅣ 밑에 while 문에 한번 사용되기때문에.
// 	if (!lst)
// 		return (0);
// 	while (lst->next != NULL)
// 	{
// 		lst = lst->next;
// 		count++;
// 	}	