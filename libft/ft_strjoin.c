/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnimwata <pnimwata@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:30:41 by pnimwata          #+#    #+#             */
/*   Updated: 2022/02/20 12:30:41 by pnimwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;
	size_t	i;
	size_t	j;

	new_s = (char *)malloc ((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof (char));
	i = 0;
	j = 0;
	while (*(s1 + j) != '\0')
	{
		*(new_s + i) = *(s1 + j);
		i++;
		j++;
	}
	j = 0;
	while (*(s2 + j) != '\0')
	{
		*(new_s + i) = *(s2 + j);
		i++;
		j++;
		if (*(s2 + j) == '\0')
			*(new_s + i) = 0;
	}
	return (new_s);
}