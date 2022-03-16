/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femonner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 13:19:44 by femonner          #+#    #+#             */
/*   Updated: 2022/03/16 13:26:46 by femonner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putnbr_fd(n / 10);
		ft_putchar('8');
	}
	else if (n < 0)
	{
		ft_putchar_fd('-');
		ft_putnbr_fd(-n);
	}
	else
	{
		if (n > 9)
		{
			ft_putnbr_fd(n / 10);
		}
		ft_putchar_fd (48 + n % 10);
	}
}
