/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnimwata <pnimwata@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 16:57:20 by pnimwata          #+#    #+#             */
/*   Updated: 2022/02/20 16:57:20 by pnimwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_log10(int n)
{
	int	count;

	count = 0;
	if (n / 10 <= 1)
		return (count);
	while (n / (10 * count) > 1)
		count++;
	return (count);
}

char	*ft_itoa(int n){
	char	*new_s;
	size_t	size;
	size_t	abs_n;
	size_t	i;
	
	size = ft_log10(n);
	if (n < 0)
	{
		size++;
		abs_n = n * (-1);
	}
	new_s = (char *)ft_calloc(size + 1, sizeof (char));
	if (n < 0)
		new_s[0] = '-';
	i = 0;
	while (size > 0)
	{
		new_s[i] = abs_n / (10 * size) + '0';
		abs_n -= abs_n / (10 * size);
		size--;
		i++;
	}
	if (size == 0)
		new_s[i] = abs_n + '0';
	new_s[i + 1] = '\0';
	return (new_s);
}