/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerodrig <jerodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 19:47:16 by jerodrig          #+#    #+#             */
/*   Updated: 2022/08/24 15:44:02 by jerodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int x);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int x)
{
	if (x == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		x = 147483648;
	}
	if (x < 0)
	{
		ft_putchar('-');
		x = -x;
	}
	if (x >= 10)
	{
		ft_putnbr(x / 10);
		x = x % 10;
	}
	if (x < 10)
	{
		ft_putchar(x + 48);
	}
}
