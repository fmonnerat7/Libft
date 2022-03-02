/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femonner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 18:04:32 by femonner          #+#    #+#             */
/*   Updated: 2022/03/02 13:56:02 by femonner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	i;

	if (dstsize <= ft_strlen(dst))
	{
		return (dstsize + ft_strlen(src));
	}
	dlen = ft_strlen(dst);
	i = 0;
	while (src[i] != '\0' && dlen + 1 < dstsize)
	{
		dst[dlen] = src[i];
		dlen ++;
		i ++;
	}
	dst[dlen] = '\0';
	return (ft_srlen(dst) + ft_strlen(&src[i]));
}
