/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_implementation.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 21:14:55 by romoreno          #+#    #+#             */
/*   Updated: 2023/04/27 21:14:55 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

static int	ft_process_param(va_list ptr, char str);

int	ft_printf(char const *str, ...)
{
	va_list	ptr;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(ptr, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			count += ft_process_param(ptr, str[i + 1]);
			i++;
		}
		else
			count += ft_putchar_count(str[i]);
		i++;
	}
	va_end(ptr);
	return (count);
}

static int	ft_process_param(va_list ptr, char str)
{
	int	count;

	count = 0;
	if (str == 'c')
		count = ft_putchar_count((unsigned char)va_arg(ptr, int));
	else if (str == 's')
		count = ft_putstr_count(va_arg(ptr, char *));
	else if (str == 'p')
		count = ft_putptr_count(va_arg(ptr, void *));
	else if (str == 'd' || str == 'i')
		count = ft_putsigned_count(va_arg(ptr, int), "0123456789");
	else if (str == 'u')
		count = ft_putunsigned_count(va_arg(ptr, int), "0123456789");
	else if (str == 'x')
		count = ft_putunsigned_count(va_arg(ptr, int), "0123456789abcdef");
	else if (str == 'X')
		count = ft_putunsigned_count(va_arg(ptr, int), "0123456789ABCDEF");
	else if (str == '%')
		count = ft_putchar_count('%');
	return (count);
}
