/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 09:22:34 by romoreno          #+#    #+#             */
/*   Updated: 2022/11/01 09:22:34 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	character;
	size_t			characters_checked;

	str = (unsigned char *)s;
	character = (unsigned char)c;
	characters_checked = 0;
	if (n > 0)
	{
		while (*str != character && characters_checked < (n - 1))
		{
			str++;
			characters_checked++;
		}
		if (*str == character)
			return ((void *)str);
	}
	return (NULL);
}
