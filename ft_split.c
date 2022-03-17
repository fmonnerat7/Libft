/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femonner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:32:59 by femonner          #+#    #+#             */
/*   Updated: 2022/03/17 15:34:36 by femonner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	count_words;
	int	find;

	count_words = 0;
	find = 0;
	while (*str)
	{
		if (*str != c && find == 0)
		{
			find = 1;
			count_words++;
		}
		else if (*str == c)
			find = 0;
		str++;
	}
	return (count_words);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

static char	**splitter_frame(char **split, char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		startword;

	i = 0;
	j = 0;
	startword = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && startword < 0)
			startword = i;
		else if ((s[i] == c || i == ft_strlen(s)) && startword >= 0)
		{
			split[j++] = word_dup(s, startword, i);
			startword = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!s)
		return (0);
	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!split)
		return (0);
	return (splitter_frame(split, s, c));
}
