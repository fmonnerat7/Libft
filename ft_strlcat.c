/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femonner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 18:04:32 by femonner          #+#    #+#             */
/*   Updated: 2022/03/14 15:22:56 by femonner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	i;

	if (dstsize <= ft_strlen(dest))
	{
		return (dstsize + ft_strlen(src));
	}
	dlen = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && dlen + 1 < dstsize)
	{
		dest[dlen] = src[i];
		dlen ++;
		i ++;
	}
	dest[dlen] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[i]));
}
