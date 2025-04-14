/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapere <alvapere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:50:23 by alvapere          #+#    #+#             */
/*   Updated: 2025/04/14 17:16:38 by alvapere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ret;

	ret = (char *) s;
	i = ft_strlen(ret);
	while (i >= 0)
	{
		if (ret[i] == c)
			return (ret + i);
		i--;
	}
	return (NULL);
}
