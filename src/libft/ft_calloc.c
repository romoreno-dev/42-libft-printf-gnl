/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:58:41 by romoreno          #+#    #+#             */
/*   Updated: 2022/11/01 11:58:41 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*memory_allocated;
	int		needs;

	needs = count * size;
	if (needs >= 0)
	{
		memory_allocated = (void *) malloc(needs);
		if (memory_allocated == NULL)
			return (NULL);
		ft_memset(memory_allocated, 0, needs);
		return (memory_allocated);
	}
	return (NULL);
}
