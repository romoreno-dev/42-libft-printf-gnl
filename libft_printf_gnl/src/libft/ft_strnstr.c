/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:19:20 by romoreno          #+#    #+#             */
/*   Updated: 2022/11/01 10:19:20 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*str;
	char	*to_find;
	size_t	i;
	size_t	j;

	i = 0;
	str = (char *)haystack;
	to_find = (char *)needle;
	if (to_find[i] == '\0' || (str == to_find && len > 0))
		return (str);
	if (len > 0)
	{
		while (str[i] != '\0' && i < len)
		{
			j = 0;
			while (str[i + j] == to_find[j] && (i + j) < len)
			{
				if (to_find[j + 1] == '\0')
					return (&str[i]);
				j++;
			}
			i++;
		}
	}
	return (0);
}
