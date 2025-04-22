/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapere <alvapere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 12:13:09 by alvapere          #+#    #+#             */
/*   Updated: 2025/04/22 15:26:30 by alvapere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief:Establece los primeros num bytes del bloque de memoria
///apuntado por ptr al valor especificado value. La función se usa 
///comúnmente para inicializar o "llenar" 
///una zona de memoria con un valor constante.
/// @param ptr:un puntero al bloque de memoria que se va a llenar
/// @param value:el valor con el que se va a llenar.
/// @param num:la cantidad de bytes que se deben llenar.
/// @return:Un puntero al mismo bloque de memoria (ptr), 
///para permitir el encadenamiento de llamadas si se desea.
void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned int	i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)ptr;
	while (i < num)
	{
		*str = value;
		i++;
		str++;
	}
	return (ptr);
}
