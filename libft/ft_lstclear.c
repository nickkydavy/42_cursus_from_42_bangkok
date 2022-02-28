/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnimwata <pnimwata@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 16:03:15 by pnimwata          #+#    #+#             */
/*   Updated: 2022/02/28 16:03:15 by pnimwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	
	if (lst == 0)
		return (0);
	if (*lst == 0)
		return (0);
	temp = *lst;
	while (*lst != NULL)
	{
		temp = (*lst)->next;
		del(*lst);
		free(*lst);
		*lst = temp;
	}
}