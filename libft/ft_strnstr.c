/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapere <alvapere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:57:14 by alvapere          #+#    #+#             */
/*   Updated: 2025/04/09 13:48:00 by alvapere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ret;

	ret = (char *) str;
	if (to_find[i] == '\0')
		return (ret);
	i = 0;
	while (ret[i] != '\0' && i < len)
	{
		if (str[i] == to_find[0])
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
// int	main()
// {
// 	const char	dest[30] = "hola 42mad";
// 	const char	src[30] = "";
// 	size_t	len = 6;
// 	printf("%s\n", ft_strnstr(dest, src, len));
// 	return (0);
// }