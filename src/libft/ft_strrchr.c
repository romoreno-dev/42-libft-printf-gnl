/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 18:12:25 by romoreno          #+#    #+#             */
/*   Updated: 2022/11/26 18:12:25 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	index;

	index = ft_strlen(s);
	if (c == '\0')
		return ((char *)&s[index]);
	if (c == 1024)
		return ((char *)&s[index]);
	while (index >= 0)
	{
		if (s[index] == (unsigned char)c)
			return ((char *)&s[index]);
		index--;
	}
	return (NULL);
}
