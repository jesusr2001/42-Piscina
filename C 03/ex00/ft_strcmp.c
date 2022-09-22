/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerodrig <jerodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 20:40:08 by jerodrig          #+#    #+#             */
/*   Updated: 2022/08/29 19:44:02 by jerodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/* La función strcmp compara las cadenas. En resumen , compara carácter por carácter , 
si las cadenas son iguales retornara un valor 0, si la primera cadena es mayor retornara 
un valor positivo y si es menor retornara un valor negativo.*/