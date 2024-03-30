/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 21:15:20 by romoreno          #+#    #+#             */
/*   Updated: 2023/04/27 21:15:20 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdarg.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

/**
 * @brief Prints the string str and, attending to the format
 * specifiers cspdiuxX, prints the variable arguments when if required.
 *
 * @param str String format with format specifiers
 * @param ... Variable arguments that are required by the string format
 * @return
 */
int		ft_printf(char const *str, ...);

int		ft_putchar_count(char c);
int		ft_putstr_count(char *s);
int		ft_putptr_count(void *ptr);
int		ft_putsigned_count(int nbr, char *base);
int		ft_putunsigned_count(unsigned int nbr, char *base);
void	ft_print_ptr(unsigned long long aux_num, char *base, int *count);
void	ft_print_snbr(long aux_num, char *base, int size_base, int *count);
void	ft_print_unbr(unsigned int aux, char *base, int size_base, int *count);
size_t	ft_strlen(const char *s);
void	ft_bzero(void *s, size_t n);
int		check_base_and_get_size_base(char *base);

#endif