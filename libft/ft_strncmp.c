/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapere <alvapere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:10:37 by alvapere          #+#    #+#             */
/*   Updated: 2025/04/22 16:25:52 by alvapere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief:Compara las cadenas carácter por carácter, 
///hasta n caracteres o hasta que uno termine. 
///En cuanto encuentra un carácter diferente, 
///retorna la diferencia de valores ASCII (como strcmp, pero limitado a n).
/// @param s1:puntero a la cadena a comparar.
/// @param s2:puntero a la cadena a comparar.
/// @param n:número máximo de caracteres a comparar.
/// @return:Un valor negativo si s1 < s2. Cero si son iguales hasta n caracteres
///Un valor positivo si s1 > s2.

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
