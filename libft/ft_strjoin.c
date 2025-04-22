/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapere <alvapere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 10:28:46 by alvapere          #+#    #+#             */
/*   Updated: 2025/04/22 16:14:15 by alvapere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief:concatenar dos cadenas (s1 y s2) en una nueva.
/// @param s1:primera cadena.
/// @param s2:segunda cadena.
/// @return:Una nueva cadena que contiene s1 + s2.
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*aux;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (!s1 || !s1)
		return (NULL);
	aux = (char *)malloc(sizeof(char) *(len_s1 + len_s2 + 1));
	if (!aux)
		return (NULL);
	ft_strlcpy(aux, s1, len_s1 + 1);
	ft_strlcat(aux, s2, len_s1 + len_s2 + 1);
	return (aux);
}
