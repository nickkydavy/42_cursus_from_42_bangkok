/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnimwata <pnimwata@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:25:20 by pnimwata          #+#    #+#             */
/*   Updated: 2022/02/20 12:25:20 by pnimwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_s;
	size_t	i;

	new_s = (char *)malloc(len * sizeof (char));
	if (new_s[0] == 0)
		return (0);
	i = (size_t)start;
	while (i < len) 
	{
		*(new_s + i) = *(s + i);
		i++;
		if (i == len)
			*(new_s + i) = '\0';
	}
	return (new_s);
}