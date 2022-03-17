/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femonner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:24:28 by femonner          #+#    #+#             */
/*   Updated: 2022/03/17 16:19:47 by femonner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*aux;

	aux = s;
	i = ft_strlen(s);
	s = (s + i);
	while (*s != *aux && (unsigned char)c != *s)
	{
		s--;
	}
	if ((unsigned char)c == *s)
	{
		return ((char *)s);
	}
	return (0);
}
