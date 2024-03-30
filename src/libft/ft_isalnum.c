/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 17:40:45 by romoreno          #+#    #+#             */
/*   Updated: 2022/09/24 20:54:14 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	ft_isalnum(int c)
{
	int	result;

	result = 0;
	if (ft_isdigit(c) == 1 || ft_isalpha(c) == 1)
	{
		result = 1;
	}
	return (result);
}
