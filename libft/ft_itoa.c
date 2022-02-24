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

char	*ft_itoa(int n){
	char	*new_s;

	new_s = (char *)ft_calloc(10, sizeof (char));
	if (!new_s)
		return (0);
	if(n >= 0 && new_s)
	{
		*(--new_s) = '0' + (n % 10);
		n /= 10;
		while (n != 0)
		{
			*(--new_s) = '0' + (n % 10);
			n /= 10;
		}
	}
	else if (new_s)
	{
		*(--new_s) = '0' - (n % 10);
		n /= 10;
		while (n != 0)
		{
			*(--new_s) = '0' - (n % 10);
			n /= 10;
		}
		*(--new_s) = '-';
	}
	return (new_s);
}