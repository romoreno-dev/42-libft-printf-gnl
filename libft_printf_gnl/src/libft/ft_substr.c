/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:23:10 by romoreno          #+#    #+#             */
/*   Updated: 2022/11/01 16:23:10 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	size_t			str_length;
	size_t			space_needed;

	str_length = ft_strlen(s);
	space_needed = 0;
	if (start < str_length)
	{
		space_needed = str_length - start;
		if (space_needed >= len)
			space_needed = len;
	}
	str = (char *) malloc(sizeof(char) * (space_needed + 1));
	if (str == NULL)
		return (NULL);
	if (space_needed != 0 && start < str_length)
		ft_strlcpy(str, &s[start], space_needed + 1);
	else
		*str = 0;
	return (str);
}
