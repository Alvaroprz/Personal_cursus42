/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapere <alvapere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:38:04 by alvapere          #+#    #+#             */
/*   Updated: 2025/04/09 15:37:24 by alvapere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ret;

	ret = (char *) s;
	i = 0;
	while (ret[i] != '\0')
		if (ret[i] == c)
			return (ret + i);
	return (NULL);
}
