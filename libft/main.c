/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnimwata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:57:41 by pnimwata          #+#    #+#             */
/*   Updated: 2022/02/15 11:57:41 by pnimwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	str1[20] = "testing";
	char	str2[20] = "tssting1";
	void	*str_void_test1;

	str_void_test1 = (void *)str1;
	printf("%ld\n", ft_strlen(str1));
	printf("%d\n", ft_isalpha(str1[0]));
	printf("%d\n", ft_isascii(str1[0]));
	printf("%d\n", ft_isdigit(str1[0]));
	printf("%d\n", ft_isprint(str1[0]));
	printf("%d\n", ft_strncmp(str1, str2, 4));
	printf("%s\n", (char *)ft_memset(str_void_test1, '0', 2));
	printf("%s\n", str1);
	return (0);
}