/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femonner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:36:55 by femonner          #+#    #+#             */
/*   Updated: 2022/03/16 12:53:55 by femonner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	strt;
	size_t	j;

	substr = (char *)malloc(len + 1);
	if (!s || !substr)
	{
		return (0);
	}
	strt = start;
	i = 0;
	while (strt < ft_strlen(s) && i < len)
	{
		substr[i] = s[strt];
		strt++;
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
