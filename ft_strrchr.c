/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femonner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:24:28 by femonner          #+#    #+#             */
/*   Updated: 2022/03/14 15:18:36 by femonner         ###   ########.fr       */
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
	while (*s != *aux && c != *s)
	{
		s--;
	}
	if (c == *s)
	{
		return ((char *)s);
	}
	return (0);
}
