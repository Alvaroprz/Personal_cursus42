/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:38:29 by marvin            #+#    #+#             */
/*   Updated: 2025/04/10 11:38:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	            i;
	const unsigned char	*ptr;
	while (i < n)
	{
		if (ptr[i] == c)
			return ((void *)(ptr +i));
		i++;
	}
	return (NULL);
}
