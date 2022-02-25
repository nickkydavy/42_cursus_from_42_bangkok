/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnimwata <pnimwata@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 14:11:11 by pnimwata          #+#    #+#             */
/*   Updated: 2022/02/25 13:02:08 by pnimwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *big, char const *little, size_t n)
{
	size_t	i;
	size_t	j;
	
	if (*(little) == 0)
		return ((char *)big);
	i = -1;
	j = -1;
	while (*(big + (++i)) != '\0' && i < n)
	{
		while (*(big + i) == *(little + (++j)) && *(little + j) != '\0')
		{
			i++;
			if (*(little + j) == '\0')
				return ((char *)big + i); 
		}
	}
	return (0);
}
