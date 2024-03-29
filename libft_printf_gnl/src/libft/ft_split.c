/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 13:03:17 by romoreno          #+#    #+#             */
/*   Updated: 2022/11/26 13:03:17 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	index;
	int	words;

	index = 0;
	words = 0;
	while (s[index] != '\0')
	{
		if (s[index] != c && (s[index + 1] == c || s[index + 1] == '\0'))
		{
			words++;
		}
		index++;
	}
	return (words);
}

static void	ft_words_length(char const *s, char c, int words, int *words_length)
{
	int	index;
	int	number_word;
	int	characters_counter;

	index = 0;
	number_word = 0;
	while (number_word < words)
	{
		characters_counter = 0;
		while (s[index] == c)
			index++;
		while (s[index] != c && s[index] != '\0')
		{
			characters_counter++;
			index++;
		}
		words_length[number_word] = characters_counter;
		number_word++;
	}
}

static void	ft_build_splitted_words(char const *s, char **sw, char c, int words)
{
	int	index;
	int	number_word;
	int	character_index;

	index = 0;
	number_word = 0;
	while (number_word < words)
	{
		character_index = 0;
		while (s[index] == c)
			index++;
		while (s[index] != c && s[index] != '\0')
		{
			sw[number_word][character_index] = s[index];
			character_index++;
			index++;
		}
		sw[number_word][character_index] = '\0';
		number_word++;
	}
	sw[number_word] = NULL;
}

static void	*ft_free(int *words_len, char **splitted_words, int words)
{
	int	index;

	index = 0;
	if (words_len != NULL)
		free(words_len);
	if (splitted_words != NULL)
	{
		while (index < words)
		{
			if (splitted_words[index] != NULL)
				free(splitted_words[index]);
			index++;
		}
		free(splitted_words);
	}
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	int		*words_len;
	char	**splitted_words;
	int		index;

	index = 0;
	words = ft_count_words(s, c);
	words_len = (int *) malloc(sizeof(int) * words);
	if (words_len == NULL)
		return (NULL);
	ft_words_length(s, c, words, words_len);
	splitted_words = malloc(sizeof(*splitted_words) * (words + 1));
	if (splitted_words == NULL)
		return (ft_free(words_len, splitted_words, 0));
	while (index < words)
	{
		splitted_words[index] = malloc(sizeof(char) * (words_len[index] + 1));
		if (splitted_words[index] == NULL)
			return (ft_free(words_len, splitted_words, index));
		index++;
	}
	ft_build_splitted_words(s, splitted_words, c, words);
	free(words_len);
	return (splitted_words);
}
