/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 09:49:55 by romoreno          #+#    #+#             */
/*   Updated: 2022/11/01 09:49:55 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			index;

	if (n > 0)
	{
		index = 0;
		str1 = (unsigned char *)s1;
		str2 = (unsigned char *)s2;
		while (str1[index] == str2[index] && index < (n - 1))
			index++;
		if (str1[index] != str2[index])
			return (str1[index] - str2[index]);
	}
	return (0);
}
