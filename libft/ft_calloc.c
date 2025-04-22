/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapere <alvapere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 12:13:21 by alvapere          #+#    #+#             */
/*   Updated: 2025/04/22 13:21:37 by alvapere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief: Sirve para reservar memoria dinámica 
///inicializada a cero.
/// @param nmemb:número de elementos.
/// @param size:tamaño de cada elemento.
/// @return:devuelve un puntero a la memoria reservada,
/// o NULL si falla.
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	max;

	max = (size_t) - 1;
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (size != 0 && nmemb > max / size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, (nmemb * size));
	return (ptr);
}
