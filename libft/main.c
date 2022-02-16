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
	char	*str = "testing";

	printf("%d\n", ft_strlen(str));
	printf("%d\n", ft_isalpha(str[0]));
	printf("%d\n", ft_isascii(str[0]));
	printf("%d\n", ft_isdigit(str[0]));
	printf("%d\n", ft_isprint(str[0]));
	return (0);
}