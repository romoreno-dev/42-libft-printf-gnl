/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:32:19 by romoreno          #+#    #+#             */
/*   Updated: 2022/11/01 18:32:19 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	length_new_str;
	char	*new_str;

	length_new_str = ft_strlen(s1) + ft_strlen(s2);
	new_str = (char *)malloc(sizeof(char) * (length_new_str + 1));
	if (new_str == NULL)
		return (NULL);
	ft_memset(new_str, 0, length_new_str + 1);
	if (length_new_str == 0)
		return (new_str);
	ft_strlcat(new_str, s1, length_new_str + 1);
	ft_strlcat(new_str, s2, length_new_str + 1);
	return (new_str);
}
