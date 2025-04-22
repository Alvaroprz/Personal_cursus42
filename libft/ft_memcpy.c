/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapere <alvapere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:36:21 by alvapere          #+#    #+#             */
/*   Updated: 2025/04/22 13:38:46 by alvapere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief:Copia un bloque de memoria de n bytes
/// desde el bloque src_str a dest_str
/// @param dest_str :Puntero a la memoria 
///de destino donde se copiarán los datos.
/// @param src_str :Puntero a la memoria de origen 
///de donde se copiarán los datos.
/// @param n : Número de bytes a copiar.
/// @return :Un puntero a dest_str, la ubicación de destino.
void	*ft_memcpy(void *dest_str, const void *src_str, size_t n)
{
	size_t			i;
	unsigned char	*ret;
	unsigned char	*ret2;

	i = 0;
	if (src_str == NULL && dest_str == NULL)
		return (NULL);
	ret = (unsigned char *) src_str;
	ret2 = (unsigned char *) dest_str;
	while (i < n)
	{
		ret2[i] = ret[i];
		i++;
	}
	return (dest_str);
}
