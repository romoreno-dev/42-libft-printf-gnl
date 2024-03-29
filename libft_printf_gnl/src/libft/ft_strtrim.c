/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:06:05 by romoreno          #+#    #+#             */
/*   Updated: 2022/11/01 19:06:05 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

static int	ft_isinset(char c, char const *set)
{
	int	result;
	int	index;

	result = 0;
	index = 0;
	while (set[index] != '\0' && result == 0)
	{
		if (c == set[index])
			result = 1;
		index++;
	}
	return (result);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	begin_str;
	int	end_str;
	int	index;
	int	lenght_new_str;

	begin_str = 0;
	end_str = ft_strlen(s1);
	index = 0;
	lenght_new_str = 0;
	while (s1[index] != '\0' && ft_isinset(s1[index], set) == 1)
	{
		index++;
	}
	if (ft_isinset(s1[index], set) == 0)
		begin_str = index;
	index = end_str - 1;
	while (ft_isinset(s1[index], set) == 1 && index >= 0)
	{
		index--;
	}
	if (ft_isinset(s1[index], set) == 0)
		lenght_new_str = index - begin_str + 1;
	return (ft_substr(s1, begin_str, lenght_new_str));
}
