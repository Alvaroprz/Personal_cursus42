/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapere <alvapere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:10:21 by alvapere          #+#    #+#             */
/*   Updated: 2025/04/22 16:16:15 by alvapere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief:na función segura que concatena dos cadenas 
///con un límite de tamaño, evitando desbordamientos de buffer.
/// @param dest:cadena de destino (donde se va a agregar src).
/// @param src:cadena fuente que se va a copiar.
/// @param size:el tamaño total del buffer de dest, 
///incluyendo el espacio para \0.
/// @return:La longitud total que la cadena trató de crear.
unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	src_l;
	unsigned int	dest_l;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	dest_l = ft_strlen(dest);
	src_l = ft_strlen(src);
	i = dest_l;
	j = 0;
	if (size <= dest_l)
		return (src_l + size);
	while (i < size - 1 && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest_l + src_l);
}
