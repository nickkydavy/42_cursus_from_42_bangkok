/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnimwata <pnimwata@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 14:30:10 by pnimwata          #+#    #+#             */
/*   Updated: 2022/02/18 14:30:10 by pnimwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(char const *str)
{
	unsigned	int	nbr;
	size_t			i;
	// size_t			min_int;
	// size_t			max_int;
	int				p_or_n;

	i = 0;
	// min_int = MIN_INT;
	// max_int = MAX_INT;
	p_or_n = 1;
	nbr = 0;
	while (*(str + i) == ' ')
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
		printf("%d\n", (int)nbr);
		i++;
	}
	// if (p_or_n > 0 && nbr > max_int)
	// 	nbr = min_int + (nbr - max_int);
	// else if (p_or_n < 0 && nbr > min_int)
	// 	nbr = max_int - (nbr - min_int);
	return (p_or_n * (int)nbr);
}