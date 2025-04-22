/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapere <alvapere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:11:57 by marvin            #+#    #+#             */
/*   Updated: 2025/04/22 13:36:44 by alvapere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief: Compara los primeros n bytes de dos bloques de memoria (s1 y s2).
///La comparación se hace byte por byte.
/// @param s1:Primer bloque de memoria a comparar.
/// @param s2:Segundo bloque de memoria a comparar.
/// @param n:Número de bytes a comparar.
/// @return:Devuelve un valor negativo si el primer bloque (s1) 
///es menor que el segundo (s2).
///Devuelve un valor positivo si el primer bloque es mayor.
///Devuelve 0 si los bloques son idénticos.
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*aux;
	unsigned char	*aux2;

	aux = (unsigned char *)s1;
	aux2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (aux[i] != aux2[i])
			return (aux[i] - aux2[i]);
		i++;
	}
	return (0);
}
