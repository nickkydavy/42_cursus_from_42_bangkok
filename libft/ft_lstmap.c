/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnimwata <pnimwata@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 16:11:49 by pnimwata          #+#    #+#             */
/*   Updated: 2022/02/28 16:11:49 by pnimwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*cre_new_lst(t_list *new_lst, void *(*f)(void *), void (*del)(void *), t_list *lst)
{
	t_list	*temp;

	new_lst = ft_lstnew(f(lst->content));
	if (!temp)
		return (0);
	temp = new_lst;
	lst = lst->next;
	while (lst != 0)
	{
		temp->next = ft_lstnew(f(lst->content));
		if (!temp->next)
		{
			ft_lstclear(&new_lst, del);
			return (0);
		}
		temp = temp->next;
		lst = lst->next;
	}
	return (new_lst);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*temp;

	if (!lst || !f || !del)
		return (0);
	new_lst = 0;
	new_lst = cre_new_lst(new_lst, f, del, lst);
	return (new_lst);
}