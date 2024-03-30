/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 08:51:47 by romoreno          #+#    #+#             */
/*   Updated: 2022/11/01 08:51:47 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	index = 0;
	if (n > 0)
	{
		while (s1[index] != '\0' && s2[index] != '\0' && index < (n - 1))
		{
			if (s1[index] != s2[index])
				return ((unsigned char)s1[index] - (unsigned char)s2[index]);
			index++;
		}
		if (s1[index] != '\0' || s2[index] != '\0')
			return ((unsigned char)s1[index] - (unsigned char)s2[index]);
	}
	return (0);
}
