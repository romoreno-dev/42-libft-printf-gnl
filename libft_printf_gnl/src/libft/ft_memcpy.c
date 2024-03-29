/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:03:15 by romoreno          #+#    #+#             */
/*   Updated: 2022/10/24 20:11:19 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*str_src;
	unsigned char		*str_dst;
	size_t				index;

	str_src = (unsigned char *) src;
	str_dst = (unsigned char *) dst;
	index = 0;
	if (src == dst)
	{
		return (0);
	}
	while (index < n)
	{
		str_dst[index] = str_src[index];
		index++;
	}
	return (dst);
}
