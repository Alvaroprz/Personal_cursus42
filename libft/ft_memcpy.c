/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapere <alvapere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:36:21 by alvapere          #+#    #+#             */
/*   Updated: 2025/04/09 16:41:08 by alvapere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest_str, const void *src_str, size_t n)
{
	size_t			i;
	unsigned char	*ret;
	unsigned char	*ret2;

	i = 0;
	ret = (unsigned char *) src_str;
	ret2 = (unsigned char *) dest_str;
	while (i < n)
		ret[i++] = ret2[i];
	return (dest_str);
}
