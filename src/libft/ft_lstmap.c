/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 18:03:01 by romoreno          #+#    #+#             */
/*   Updated: 2022/11/25 18:03:01 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

static t_list	*ft_clean_in_error(void *cont, void (*del)(void *))
{
	del(cont);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*tmp;
	void	*cont;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	cont = f(lst->content);
	new_list = ft_lstnew(cont);
	if (new_list == NULL)
		return (ft_clean_in_error(cont, del));
	tmp = new_list;
	lst = lst->next;
	while (lst != NULL)
	{
		cont = f(lst->content);
		(tmp->next) = ft_lstnew(cont);
		if (tmp->next == NULL)
		{
			ft_lstclear(&new_list, del);
			return (ft_clean_in_error(cont, del));
		}
		lst = lst->next;
		tmp = tmp->next;
	}
	return (new_list);
}
