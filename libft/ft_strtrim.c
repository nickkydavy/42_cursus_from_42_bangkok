/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnimwata <pnimwata@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:36:59 by pnimwata          #+#    #+#             */
/*   Updated: 2022/02/25 13:03:19 by pnimwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_set_in_arr(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	int		count;

	i = 0;
	j = 0;
	count = 0;
	while (*(s1 + i) != '\0')
	{
		while (*(s1 + i + j) == *(set + j))
		{
			if (j == ft_strlen(set))
				count++;
			j++;
		}
		j = 0;
		i++;
	}
	return (count);
}

int	*arr_i_in_set(char const *s1, char const *set)
{
	int		*arr;
	int		size_i_of_set;
	size_t	i;
	size_t	j;
	size_t	k;

	size_i_of_set = count_set_in_arr(s1, set);
	arr = (int *)malloc (size_i_of_set * sizeof (int));
	i = 0;
	j = 0;
	k = 0;
	while (*(s1 + i) != '\0')
	{
		while (*(s1 + i + j) == *(set + j))
		{
			if (j == ft_strlen(set))
				arr[k] = i;
			j++;
		}
		i++;
	}
	return (arr);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_s;
	int		*arr_i_set;
	int		total_new_size;
	size_t	i;
	size_t	j;
	size_t	k;

	arr_i_set = arr_i_in_set(s1, set);
	total_new_size = ft_strlen(s1) - (count_set_in_arr(s1, set) * ft_strlen(set));
	new_s = (char *)malloc (total_new_size + 1);
	i = 0;
	j = 0;
	k = 0;
	while (*(s1 + i) != '\0')
	{
		if (i == (size_t)arr_i_set[j])
		{
			i += ft_strlen(set);
			j++;
		}
		else
		{
			new_s[k] = s1[i];
			i++;
			k++;
		}
	}
	free(arr_i_set);
	return (new_s);
}
