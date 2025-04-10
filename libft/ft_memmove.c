/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapere <alvapere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:12:43 by alvapere          #+#    #+#             */
/*   Updated: 2025/04/09 16:40:14 by alvapere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*aux;
	unsigned char	*aux2;

	i = 0;
	aux = (unsigned char *) src;
	aux2 = (unsigned char *) dest;
	if (aux < aux2)
	{
		while (n)
		{
			aux2[n - 1] = aux[n - 1];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			aux2[i] = aux2[i];
			i++;
		}
	}
	return (dest);
}
