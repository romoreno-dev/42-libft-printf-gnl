/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 20:34:29 by romoreno          #+#    #+#             */
/*   Updated: 2023/04/27 20:34:29 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

int	ft_putptr_count(void *ptr)
{
	int	count;

	count = 0;
	count += ft_putstr_count("0x");
	ft_print_ptr((unsigned long long) ptr, "0123456789abcdef", &count);
	return (count);
}

int	ft_putsigned_count(int nbr, char *base)
{
	int		size_base;
	int		count;
	long	aux_num;

	count = 0;
	size_base = check_base_and_get_size_base(base);
	if (size_base == -1)
		return (0);
	aux_num = nbr;
	if (nbr < 0)
	{
		aux_num = -aux_num;
		write(1, "-", 1);
		count++;
	}
	ft_print_snbr(aux_num, base, size_base, &count);
	return (count);
}

int	ft_putunsigned_count(unsigned int nbr, char *base)
{
	int				size_base;
	int				count;
	unsigned int	aux_num;

	count = 0;
	size_base = check_base_and_get_size_base(base);
	if (size_base == -1)
		return (0);
	aux_num = nbr;
	ft_print_unbr(aux_num, base, size_base, &count);
	return (count);
}
