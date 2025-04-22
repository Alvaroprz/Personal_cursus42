/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapere <alvapere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:21:41 by alvapere          #+#    #+#             */
/*   Updated: 2025/04/22 16:41:48 by alvapere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief:Calcula la longitud de la cadena original s.
///Verifica que el índice de inicio (start) 
///no esté fuera de los límites de la cadena.
///Calcula la longitud de la subcadena a extraer.
///Esta longitud es el valor mínimo entre 
///la longitud de la cadena restante después del 
///índice start y len (longitud máxima especificada).
///Asigna memoria para la subcadena y la copia.
/// @param s:la cadena original de la que se va a extraer la subcadena.
/// @param start:el índice inicial desde donde comienza la subcadena.
/// @param len:a longitud máxima de la subcadena a extraer.
/// @return:Un puntero a la subcadena extraída.

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	sub_len;
	char	*sub;

	s_len = ft_strlen(s);
	sub_len = s_len - start;
	if (!s)
		return (NULL);
	if (start >= s_len)
		return (ft_strdup(""));
	if (sub_len > len)
		sub_len = len;
	sub = malloc(sizeof(char ) * (sub_len + 1));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, sub_len + 1);
	return (sub);
}
