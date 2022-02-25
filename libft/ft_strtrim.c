/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnimwata <pnimwata@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:36:59 by pnimwata          #+#    #+#             */
/*   Updated: 2022/02/25 21:40:03 by pnimwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_trimmed_str(char const *s, char const *set)
{
	size_t	count;

	count = 0;
	while (*s != 0)
	{
		if (ft_strchr(set, *s) == 0)
			count++;
		s++;
	}
	return (count);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_s;
	size_t	size;
	size_t	i;

	size = count_trimmed_str(s1, set);
	new_s = (char *)ft_calloc(size + 1, sizeof (char));
	if (!new_s)
		return (0);
	i = 0;
	while (i < size)
	{
		while (*s1 != 0)
		{
			if (ft_strchr(set, *s1) == 0)
			{
				*(new_s + i) = *s1;
				i++;
			}
			s1++;
		}
	}
	*(new_s + i) = 0;
	return (new_s);
}
