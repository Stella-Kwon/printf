/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:29:09 by sukwon            #+#    #+#             */
/*   Updated: 2022/11/15 17:07:30 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
// void	ft_lstadd_front(t_list **lst, t_list *new)
// {
// 	t_list	*head;

// 	if (!lst || !new)
// 		return ;
// 	if (!(*lst))
// 		*lst = new; 
// 	else
// 	{
// 		head = *lst;
// 		new->next = head;
// 		*lst = new;  //결과가 같아 위에 이프일때랑
// 	}
// }
