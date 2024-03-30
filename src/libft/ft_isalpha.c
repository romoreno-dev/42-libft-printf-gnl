/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 19:36:01 by romoreno          #+#    #+#             */
/*   Updated: 2022/09/24 17:03:05 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	ft_isalpha(int argument)
{
	int	resultado;

	resultado = 0;
	if ((argument >= 'A' && argument <= 'Z')
		|| (argument >= 'a' && argument <= 'z'))
		resultado = 1;
	return (resultado);
}
