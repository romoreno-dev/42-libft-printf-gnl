/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 19:46:15 by romoreno          #+#    #+#             */
/*   Updated: 2022/10/12 19:02:35 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	ft_bzero(void *s, size_t n)
{
	char		*str;
	size_t		index;

	str = (char *) s;
	if (n > 0)
	{
		index = 0;
		while (index < n)
		{
			str[index] = 0;
			index++;
		}
	}
}
