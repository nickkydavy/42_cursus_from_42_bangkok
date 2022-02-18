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
	// char	str1[20] = {-12, 0, 127, 0};
	// char	str2[20] = {0, 0, 127, 0};
	// char	str3[20] = "testing";
	// char	str4[20] = "gnitset";
	// void	*str_void_test1;
	// void	*str_void_test2;

	// str_void_test1 = (void *)str1;
	// str_void_test2 = (void *)str2;
	// printf("%d\n", ft_memcmp(str1, str2, 5));
	// printf("%d\n", memcmp(str1, str2, 5));
	// printf("%d\n", ft_strncmp(str3, str4, 7));
	// printf("%d\n", strncmp(str3, str4, 7));
	printf("%d\n", ft_atoi("  +2147490000 1234"));
	printf("%d\n", atoi("  +2147490000 1234"));
	return (0);
}