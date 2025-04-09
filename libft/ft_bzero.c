/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 13:09:33 by alvapere          #+#    #+#             */
/*   Updated: 2025/04/08 13:09:39 by alvapere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	unsigned char	ptr;

	i = 0;
	ptr = (unsigned char*)s;
	while (i < n)
	{
		ptr = '\0';
		i++;
		ptr++;	
	}
	return (ptr);
}