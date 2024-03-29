/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 22:25:28 by romoreno          #+#    #+#             */
/*   Updated: 2022/11/22 22:25:28 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (*lst == NULL)
	{
		(*lst) = new;
	}
	else
	{
		aux = *lst;
		while ((*lst)->next != NULL)
		{
			(*lst) = (*lst)->next;
		}
		(*lst)->next = new;
		(*lst) = aux;
	}
}
