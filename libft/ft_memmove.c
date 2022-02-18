/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnimwata <pnimwata@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:32:11 by pnimwata          #+#    #+#             */
/*   Updated: 2022/02/17 11:32:11 by pnimwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void const *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	while (*(d + i) != '\0' && *(s + i) != '\0' && i < n)
	{
		*(d + i) = *(s + i);
		i++;
	}
	return (dest);
}