/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnimwata <pnimwata@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:04:29 by pnimwata          #+#    #+#             */
/*   Updated: 2022/02/16 19:04:29 by pnimwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	str1[20] = {-128, 0, 127, 0};
	char	str2[20] = {0, 0, 127, 0};
	// void	*str_void_test1;
	// void	*str_void_test2;

	// str_void_test1 = (void *)str1;
	// str_void_test2 = (void *)str2;
	printf("%d\n", (int)ft_memcmp(str1, str2, 5));
	printf("%d\n", (int)memcmp(str1, str2, 5));
	return (0);
}