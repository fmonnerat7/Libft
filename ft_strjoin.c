/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femonner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:57:55 by femonner          #+#    #+#             */
/*   Updated: 2022/03/16 12:54:50 by femonner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str3;
	int		i;
	int		aux;

	str3 = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s1 || !s2 || !str3)
	{
		return (0);
	}
	i = 0;
	while (s1[i] != '\0')
	{
		str3[i] = s1[i];
		i++;
	}
	aux = 0;
	while (s2[aux] != '\0')
	{
		str3[i] = s2[aux];
		i++;
		aux++;
	}
	str3[i] = '\0';
	return (str3);
}
