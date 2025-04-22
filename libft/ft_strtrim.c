/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapere <alvapere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 11:54:55 by alvapere          #+#    #+#             */
/*   Updated: 2025/04/22 16:36:42 by alvapere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief:Busca el primer carácter en s1 que no esté 
///en set (esto lo hace en el inicio de la cadena).
///Busca el último carácter en s1 que no esté en set 
///(esto lo hace al final de la cadena).
///Copia la subcadena que queda entre esos dos puntos (si existe).
/// @param s1:la cadena original de la que queremos eliminar los caracteres.
/// @param set:el conjunto de caracteres que deseamos
/// eliminar desde el principio y el final de s1.
/// @return:Una nueva cadena que es una copia de 
///s1 sin los caracteres del conjunto set en los bordes.

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*aux;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	aux = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!aux)
		return (NULL);
	ft_strlcpy(aux, s1 + start, end - start + 1);
	return (aux);
}
