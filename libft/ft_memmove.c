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
	int		i;
	char	*ret;
	char	*ret2;

	i = 0;
	ret = (char *) src;
	ret2 = (char *) dest;

	while (i < n)
	{
		ret2[i] = ret[i];
		i++;
	}
	return (dest);
}
