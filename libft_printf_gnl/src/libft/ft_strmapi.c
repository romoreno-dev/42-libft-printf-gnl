/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 17:38:35 by romoreno          #+#    #+#             */
/*   Updated: 2022/11/25 17:38:35 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			length;
	unsigned int	index;
	char			*transformed_str;

	index = 0;
	length = ft_strlen(s);
	transformed_str = (char *) malloc((sizeof(char)) * (length + 1));
	if (transformed_str == NULL)
		return (NULL);
	while (s[index] != '\0')
	{
		transformed_str[index] = f(index, s[index]);
		index++;
	}
	transformed_str[index] = '\0';
	return (transformed_str);
}
