/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 17:37:51 by romoreno          #+#    #+#             */
/*   Updated: 2022/09/24 20:59:02 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	ft_isdigit(int c)
{
	int	result;

	result = 0;
	if (c >= '0' && c <= '9')
	{
		result = 1;
	}
	return (result);
}
