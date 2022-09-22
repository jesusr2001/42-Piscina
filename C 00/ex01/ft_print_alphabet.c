/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerodrig <jerodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 15:35:03 by jerodrig          #+#    #+#             */
/*   Updated: 2022/08/24 15:44:10 by jerodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	a_letter;

	a_letter = 'a';
	while (a_letter <= 'z')
	{
		write (1, &a_letter, 1);
		a_letter++;
	}
}
