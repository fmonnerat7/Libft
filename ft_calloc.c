/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femonner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 12:29:25 by femonner          #+#    #+#             */
/*   Updated: 2022/03/14 13:34:59 by femonner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_calloc(size_t count, size_t size)
{
	void	*pnt;

	pnt = malloc(count * size);
	if (!pnt)
	{
		return (0);
	}
	ft_bzero(pnt, count * size);
	return (pnt);
}
