/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:10:05 by romoreno          #+#    #+#             */
/*   Updated: 2022/11/01 11:10:05 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

static int	ft_isspace(char c)
{
	int	result;

	result = 0;
	if (c == ' ' || (c >= 9 && c <= 13))
		result = 1;
	return (result);
}

int	ft_atoi(const char *str)
{
	int				index;
	int				result;
	int				have_sign;

	index = 0;
	result = 0;
	have_sign = 0;
	while (str[index] != '\0' && ft_isspace(str[index]) == 1)
		index++;
	if (str[index] == '+' && ft_isdigit(str[index + 1]))
		index++;
	if (str[index] == '-' && ft_isdigit(str[index + 1]))
	{
		have_sign = 1;
		index++;
	}
	while (ft_isdigit(str[index]) == 1)
	{
		result = result * 10 + (str[index] - '0');
		index++;
	}
	if (have_sign)
		result = -result;
	return (result);
}
