/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapere <alvapere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:12:43 by alvapere          #+#    #+#             */
/*   Updated: 2025/04/22 13:42:34 by alvapere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief:Copia un bloque de memoria de n bytes desde src a dest,
///incluso si las áreas de memoria se solapan. 
///Si la memoria de origen y destino se solapan,
///ft_memmove garantiza que los datos de src se copien 
///correctamente a dest sin sobrescribir los datos 
///de destino antes de que se copien.
/// @param dest:Puntero al área de memoria de destino 
///donde se copiarán los datos.
/// @param src:Puntero al área de memoria de origen 
///desde donde se copiarán los datos.
/// @param n:Número de bytes a copiar.
/// @return: El puntero dest, que es la ubicación de memoria de destino.
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*aux;
	unsigned char	*aux2;

	i = -1;
	if (src == NULL && dest == NULL)
		return (dest);
	aux = (unsigned char *) src;
	aux2 = (unsigned char *) dest;
	if (aux < aux2)
	{
		while (n > 0)
		{
			aux2[n - 1] = aux[n - 1];
			n--;
		}
	}
	else
	{
		while (++i < n)
			aux2[i] = aux[i];
	}
	return (dest);
}
