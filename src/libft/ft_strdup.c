/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:50:08 by romoreno          #+#    #+#             */
/*   Updated: 2022/11/01 12:50:08 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_strdup(const char *s1)
{
	int		size;
	char	*s2;

	size = ft_strlen(s1) + 1;
	s2 = (char *) malloc(sizeof(char) * (size));
	if (s2 == NULL)
		return (NULL);
	ft_strlcpy(s2, s1, size);
	return (s2);
}
