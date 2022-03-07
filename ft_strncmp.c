/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femonner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:14:20 by femonner          #+#    #+#             */
/*   Updated: 2022/03/07 15:21:01 by femonner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	if (n == 0)
	{
		return (0);
	}
	i = 0;
	while (n > 0 && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s1[i])
		{
			break ;
		}
		i++;
		n--;
	}
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}
