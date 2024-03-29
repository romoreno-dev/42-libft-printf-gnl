/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 21:38:56 by romoreno          #+#    #+#             */
/*   Updated: 2023/05/04 21:38:56 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/get_next_line.h"

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i] != c)
	{
		if (s[i] == 0)
			return (NULL);
		i++;
	}
	return (s);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*new_str;
	size_t	i;
	size_t	j;

	if (s1 == NULL)
	{
		s1 = (char *) malloc(sizeof(char) * 1);
		s1[0] = '\0';
	}
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	new_str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (new_str == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (s1 != NULL)
		while (s1[++i] != '\0')
			new_str[i] = s1[i];
	while (s2[j] != '\0')
		new_str[i++] = s2[j++];
	new_str[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	free(s1);
	return (new_str);
}

char	*ft_get_next_line_from_static_buffer(char *static_buffer)
{
	size_t	i;
	char	*line;

	i = 0;
	if (static_buffer[i] == '\0')
		return (NULL);
	while (static_buffer[i] != '\0' && static_buffer[i] != '\n')
		i++;
	line = (char *)malloc(sizeof(char) * (i + 2));
	if (line == NULL)
		return (NULL);
	i = 0;
	while (static_buffer[i] != '\0' && static_buffer[i] != '\n')
	{
		line[i] = static_buffer[i];
		i++;
	}
	if (static_buffer[i] == '\n')
	{
		line[i] = static_buffer[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*ft_clean_static_buffer(char *stc_buffer)
{
	size_t	i;
	size_t	j;
	char	*cleaned;

	i = 0;
	while (stc_buffer[i] != '\0' && stc_buffer[i] != '\n')
		i++;
	if (stc_buffer[i] == '\0')
	{
		free(stc_buffer);
		return (NULL);
	}
	cleaned = (char *)malloc((sizeof(char)) * (ft_strlen(stc_buffer) - i + 1));
	if (cleaned == NULL)
		return (NULL);
	i++;
	j = 0;
	while (stc_buffer[i] != '\0')
		cleaned[j++] = stc_buffer[i++];
	cleaned[j] = '\0';
	free(stc_buffer);
	return (cleaned);
}
