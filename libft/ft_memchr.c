/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapere <alvapere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:38:29 by marvin            #+#    #+#             */
/*   Updated: 2025/04/22 13:31:01 by alvapere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief: Busca el primer carácter que coincida con el valor c 
///en un bloque de memoria de tamaño n, y devuelve un puntero a la 
///primera aparición de ese carácter. Si no se encuentra, devuelve NULL.
/// @param s:Puntero a la memoria a examinar.
/// @param c:Valor a buscar, convertido a un unsigned char.
/// @param n:Número de bytes a examinar.
/// @return:NULL
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
