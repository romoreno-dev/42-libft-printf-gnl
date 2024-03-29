/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:03:37 by romoreno          #+#    #+#             */
/*   Updated: 2022/10/24 20:18:23 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*str_src;
	unsigned char	*str_dst;
	size_t			index;

	if (!(len > 0 && src == NULL && dst == NULL))
	{
		str_src = (unsigned char *) src;
		str_dst = (unsigned char *) dst;
		index = -1;
		if (dst > src)
		{
			while (len-- > 0)
			{
				str_dst[len] = str_src[len];
			}
		}
		else
		{
			while (++index < len)
			{
				str_dst[index] = str_src[index];
			}
		}
	}
	return (dst);
}
