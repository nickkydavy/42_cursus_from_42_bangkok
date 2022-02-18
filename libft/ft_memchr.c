/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnimwata <pnimwata@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 13:48:11 by pnimwata          #+#    #+#             */
/*   Updated: 2022/02/18 13:48:11 by pnimwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void const *s, int c, size_t n)
{
	size_t				i;
	unsigned	char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (*(str + i) != '\0' && i < n)
	{
		if (*(str + i) == c)
			return (str + i);
		i++;
	}
	return (0);
}