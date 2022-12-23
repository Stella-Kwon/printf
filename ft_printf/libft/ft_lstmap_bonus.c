/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:31:44 by sukwon            #+#    #+#             */
/*   Updated: 2022/11/15 20:32:07 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*result;

	if (!lst || !f || !del)
		return (NULL);
	head = ft_lstnew(f(lst->content));
	if (!head)
		return (NULL);
	result = head;
	lst = lst->next;
	while (lst)
	{
		if (!(result->next = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&head, del);
			break ;
		}
		result = result->next;
		lst = lst->next;
	}
	return (head);
}
// result = head;    //Head 주소가져가고, 똑같은 크기를 복사해주는것.
// while (lst->next) //계속 lst 값을 불러와야하기떄무네 먼저 다음거불르고,
//ft_lstclear(&head, del); //만들어지기 전부터 싹다지우기
//break ; 어차피 NULL 이 나옴.