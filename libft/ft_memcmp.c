/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnimwata <pnimwata@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:06:24 by pnimwata          #+#    #+#             */
/*   Updated: 2022/02/16 18:06:24 by pnimwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void const *s1, void const *s2, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;
	
	str1 = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	while (i < n)
	{
		if (*(str1 + i) != *(str2 + i))
			return ((unsigned char)*(str1 + i) - *(str2 + i));
		i++;
	}
	return (0);
}