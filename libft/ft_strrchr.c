/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapere <alvapere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:50:23 by alvapere          #+#    #+#             */
/*   Updated: 2025/04/09 15:38:09 by alvapere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ret;

	i = ft_strlen(s);
	ret = (char *) s;
	while (i >= 0)
	{
		i--;
		if (ret[i] == c)
			return (s + i);
	}
	return (NULL);
}
