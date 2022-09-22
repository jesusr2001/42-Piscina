/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerodrig <jerodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:56:43 by jerodrig          #+#    #+#             */
/*   Updated: 2022/08/31 21:01:03 by jerodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	a;

	a = 1;
	while (nb > 0)
	{
		a *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (a);
}
