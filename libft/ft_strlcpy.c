/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnimwata <pnimwata@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:20:43 by pnimwata          #+#    #+#             */
/*   Updated: 2022/02/17 16:20:43 by pnimwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlcpy(char *dest, char const *src, size_t n)
// {
// 	size_t	i;
// 	size_t	max;

// 	i = -1;
// 	if (n > sizeof (*dest))
// 		max = sizeof (0);
// 	while (*(dest + i) != '\0' && *(src + i) != '\0' && i < n - 1)
// 	{
// 		*(dest + i) = *(src + i);
// 		i++;
// 	}
// 	return (sizeof (*dest));
// }