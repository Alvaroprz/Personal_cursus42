/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapere <alvapere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:11:02 by alvapere          #+#    #+#             */
/*   Updated: 2025/04/22 16:18:04 by alvapere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief:
/// @param dest:buffer de destino donde se copiará src.
/// @param src:cadena fuente.
/// @param size:el tamaño máximo de dest,
/// incluyendo el espacio para el '\0'.
/// @return:La longitud total de src, no la cantidad de caracteres copiados.

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;

	if (size == 0)
		return (ft_strlen((char *)src));
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen((char *)src));
}
