/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnimwata <pnimwata@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 14:30:10 by pnimwata          #+#    #+#             */
/*   Updated: 2022/02/28 14:37:42 by pnimwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c)
{
	if (c >= 9 && c <= 13)
		return (1);
	return (0);
}

int	ft_atoi(char const *str)
{
	unsigned int	nbr;
	size_t			i;
	int				p_or_n;

	i = 0;
	p_or_n = 1;
	nbr = 0;
	while (ft_isspace(*(str + i)))
		i++;
	if (*(str + i) == '-')
	{
		p_or_n *= -1;
		i++;
	}
	else if (*(str + i) == '+')
		i++;
	while (ft_isdigit(*(str + i)))
	{
		nbr = nbr * 10 + (*(str + i) - '0');
		i++;
	}
	return (p_or_n * (int)nbr);
}
