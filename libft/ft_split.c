/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnimwata <pnimwata@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:14:49 by pnimwata          #+#    #+#             */
/*   Updated: 2022/02/20 13:14:49 by pnimwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*arr_quan_split(char const *s, char c, int	size)
{
	int		*arr;
	size_t	i;
	size_t	j;
	int		count;

	i = 0;
	j = 0;
	arr = (int *)ft_calloc(size, sizeof (int));
	while (s[i] != '\0')
	{
		count++;
		if (s[i] == c)
		{
			arr[j] = count;
			j++;
			count = 0;
		}
		i++;
	}
	return (arr);
}

int		count_arr_to_split(char const *s, char c)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			size++;
	}
	return (size);
}

char	**ft_split(char const *s, char c)
{
	char	**new_arr_s;
	int		quan_arr_to_split;
	size_t	*arr_quan_each_split;
	size_t	i;
	size_t	new_arr_i;

	quan_arr_to_split = count_arr_to_split(s, c);
	arr_quan_each_split = arr_quan(s, c, quan_arr_to_split);
	new_arr_s = (char **)malloc (quan_arr_to_split * sizeof (char *));
	i = 0;
	new_arr_i = 0;
	while (new_arr_i < quan_arr_to_split)
	{
		new_arr_s[new_arr_i] = ft_substr(s, (s + i), arr_quan_each_split[new_arr_i]);
		new_arr_i++;
		i += arr_quan_each_split[new_arr_i] + 1;
		new_arr_i++;
	}
}