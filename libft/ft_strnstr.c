/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapere <alvapere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:57:14 by alvapere          #+#    #+#             */
/*   Updated: 2025/04/22 16:27:37 by alvapere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief:Busca la primera aparición de to_find dentro 
///de los primeros len caracteres de str.
/// @param str: cadena grande donde se busca.
/// @param to_find:subcadena que queremos encontrar.
/// @param len:número máximo de caracteres de str a examinar.
/// @return:Un puntero al primer carácter 
///de la primera aparición de to_find dentro de str.

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	if (*to_find == '\0')
		return ((char *)str);
	if (str == to_find)
		return ((char *)str);
	i = 0;
	while (i < len && str[i] != '\0')
	{
		j = 0;
		while (i + j < len && str[i + j] == to_find[j] && to_find[j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
