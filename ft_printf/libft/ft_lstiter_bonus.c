/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:32:16 by sukwon            #+#    #+#             */
/*   Updated: 2022/11/15 14:27:05 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// void	ft_lstiter(t_list *lst, void (*f)(void *))
// {
// 	t_list	*temp;
// 	temp = (t_list *)lst;
// 	if (temp && f)
// 		while (temp) //포인터를 따로주고 해도 되고 직접 나처럼 해줘도 되고.
// 		{
// 			f(temp->content);
// 			temp = temp->next;
//temp->next=temp 이렇게 해주면 절대 안끝나기때문에 
//temp 가 다시 next 가 가르키는 것처럼 되는것 next가 결국 null을 가르키는 끝이 올때 끝.
// 		}
// }