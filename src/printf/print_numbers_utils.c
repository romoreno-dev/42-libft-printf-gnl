/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_numbers_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 20:34:54 by romoreno          #+#    #+#             */
/*   Updated: 2023/04/27 20:34:54 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

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

int	check_base_and_get_size_base(char *base)
{
	int		i;
	char	*array_check;
	int		size_base;

	i = 0;
	array_check = (char *)malloc(sizeof(char) * 126);
	ft_bzero(array_check, 126);
	size_base = (int) ft_strlen(base);
	if (size_base < 2)
		return (-1);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] < 32 || base[i] > 126)
			return (-1);
		if (array_check[(int) base[i]] == 0)
		{
			array_check[(int) base[i]] = 1;
		}
		else
			return (-1);
		i++;
	}
	free(array_check);
	return (size_base);
}

void	ft_print_ptr(unsigned long long aux_num, char *base, int *count)
{
	if (aux_num >= (unsigned long long)16)
	{
		ft_print_ptr(aux_num / 16, base, count);
		ft_print_ptr(aux_num % 16, base, count);
	}
	else
	{
		write(1, &base[aux_num], 1);
		(*count)++;
	}
}

void	ft_print_snbr(long aux_num, char *base, int size_base, int *count)
{
	if (aux_num >= size_base)
	{
		ft_print_snbr(aux_num / size_base, base, size_base, count);
		ft_print_snbr(aux_num % size_base, base, size_base, count);
	}
	else
	{
		write(1, &base[aux_num], 1);
		(*count)++;
	}
}

void	ft_print_unbr(unsigned int aux, char *base, int size_base, int *count)
{
	if (aux >= (unsigned int)size_base)
	{
		ft_print_unbr(aux / size_base, base, size_base, count);
		ft_print_unbr(aux % size_base, base, size_base, count);
	}
	else
	{
		write(1, &base[aux], 1);
		(*count)++;
	}
}
