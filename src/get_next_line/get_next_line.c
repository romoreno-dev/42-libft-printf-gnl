/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 17:15:40 by romoreno          #+#    #+#             */
/*   Updated: 2023/05/01 17:15:40 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/get_next_line.h"

char	*ft_read_and_storage_in_buffer(int fd, char *static_buffer)
{
	char	*reading_buffer;
	int		read_bytes;

	reading_buffer = malloc (sizeof(char) * (BUFFER_SIZE + 1));
	if (reading_buffer == NULL)
		return (NULL);
	read_bytes = 1;
	while (ft_strchr(static_buffer, '\n') == NULL && read_bytes != 0)
	{
		read_bytes = read(fd, reading_buffer, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			free (reading_buffer);
			free (static_buffer);
			return (NULL);
		}
		reading_buffer[read_bytes] = '\0';
		static_buffer = ft_strjoin(static_buffer, reading_buffer);
	}
	free(reading_buffer);
	return (static_buffer);
}

char	*get_next_line(int fd)
{
	static char	*static_buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	static_buffer = ft_read_and_storage_in_buffer(fd, static_buffer);
	if (static_buffer == NULL)
		return (NULL);
	line = ft_get_next_line_from_static_buffer(static_buffer);
	static_buffer = ft_clean_static_buffer(static_buffer);
	return (line);
}
