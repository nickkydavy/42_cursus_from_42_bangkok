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

int	is_space(char const s)
{
	if (s == ' ' || s == '\t')
	return (1);
}

int	ft_atoi(char const *str)
{
	size_t	nbr;
	size_t	i;
	int	p_or_n;

	if (str == "-2147483648")
		return (-2147483648);
	i = 0;
	p_or_n = 1;
	while (*(str + i) == ' ')
		i++;
	if(*(str + i) == '-')
		p_or_n *= -1;
	i++;
	while (ft_isdigit(*(str + i)))
	{
		nbr = nbr * 10 + (*(str + i) - '0');
		i++;
	}
	return (p_or_n * (int)nbr);
}