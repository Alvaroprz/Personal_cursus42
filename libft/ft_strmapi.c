/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapere <alvapere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 14:39:49 by alvapere          #+#    #+#             */
/*   Updated: 2025/04/22 16:22:52 by alvapere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief:Recorre la cadena s, y para cada carácter 
///llama a f(i, s[i]), donde i es el índice. 
///El resultado se guarda en un nuevo string (aux), que se devuelve.
/// @param s:la cadena original a la que se le aplicará la función.
/// @param f:función que toma:un indice(unsigned int) y un caracter(char).
/// @return:Una nueva cadena con los caracteres transformados por f.
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*aux;

	len = ft_strlen(s);
	i = 0;
	aux = (char *)malloc(sizeof(char) * (len + 1));
	if (!s || !f)
		return (NULL);
	if (!aux)
		return (NULL);
	while (s[i] != '\0')
	{
		aux[i] = f(i, s[i]);
		i++;
	}
	aux[i] = '\0';
	return (aux);
}
