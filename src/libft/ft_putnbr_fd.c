/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 17:08:16 by romoreno          #+#    #+#             */
/*   Updated: 2022/11/25 17:08:16 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long			aux_num;
	unsigned char	digit_to_write;

	aux_num = n;
	if (aux_num < 0)
	{
		aux_num = -aux_num;
		write(fd, "-", 1);
	}
	if (aux_num > 9)
	{
		ft_putnbr_fd(aux_num / 10, fd);
		ft_putnbr_fd(aux_num % 10, fd);
	}
	else
	{
		digit_to_write = aux_num + '0';
		write(fd, &digit_to_write, 1);
	}
}
