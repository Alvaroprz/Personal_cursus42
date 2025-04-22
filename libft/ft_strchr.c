/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapere <alvapere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:38:04 by alvapere          #+#    #+#             */
/*   Updated: 2025/04/22 16:08:23 by alvapere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief:busca la primera aparición de un carácter en una cadena de texto.
/// @param s:puntero al string donde vamos a buscar.
/// @param c:carácter que se quiere encontrar 
///(aunque es un int, se convierte a char internamente).
/// @return:Un puntero al primer carácter coincidente dentro de s.
char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
