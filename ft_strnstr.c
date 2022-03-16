/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femonner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 12:22:33 by femonner          #+#    #+#             */
/*   Updated: 2022/03/14 15:17:54 by femonner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	aux;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		aux = 0;
		while (haystack[i + aux] == needle[aux] && (i + aux) < len)
		{
			if (haystack[i + aux] == '\0' && needle[aux] == '\0')
				return ((char *)&haystack[i]);
			aux++;
		}
		if (needle[aux] == '\0')
			return ((char *)haystack + i);
		i++;
	}
	return (0);
}
