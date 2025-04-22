/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapere <alvapere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:50:23 by alvapere          #+#    #+#             */
/*   Updated: 2025/04/22 16:30:20 by alvapere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief:Busca la última ocurrencia de un carácter 
///en la cadena s. El comportamiento es el opuesto de ft_strchr,
 ///que busca la primera aparición
/// @param s:cadena de caracteres donde se va a buscar.
/// @param c:el carácter que estamos buscando (como int,
// pero se interpretará como char dentro de la función).
/// @return:Un puntero al último carácter en s que coincida con c.

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
