/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:11:22 by romoreno          #+#    #+#             */
/*   Updated: 2022/10/12 19:42:29 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int		index;
	char	*str;

	index = 0;
	str = (char *) b;
	while (index < (int)len)
	{
		str[index] = c;
		index++;
	}
	return (b);
}
