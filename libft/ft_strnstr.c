/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapere <alvapere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:57:14 by alvapere          #+#    #+#             */
/*   Updated: 2025/04/14 17:21:51 by alvapere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ret;

	i = 0;
	ret = (char *) str;
	if (*to_find == '\0')
		return (ret);
	while (ret[i] != '\0' && i < len)
	{
		if (str[i] == to_find[i])
		{
			j = 0;
			while (str[i + j] == to_find[j] && i + j < len)
				j++;
			if (to_find[j] == '\0')
				return (ret + i);
		}
		i++;
	}
	return (NULL);
}
