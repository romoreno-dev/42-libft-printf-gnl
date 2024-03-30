/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:08:42 by romoreno          #+#    #+#             */
/*   Updated: 2022/10/31 20:08:42 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	length_dst;
	size_t	length_src;

	length_dst = ft_strlen(dst);
	length_src = ft_strlen(src);
	i = 0;
	j = length_dst;
	if (dstsize == 0 || dstsize <= length_dst)
		return (length_src + dstsize);
	while (src[i] != '\0' && i < (dstsize - length_dst - 1))
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (length_src + length_dst);
}
