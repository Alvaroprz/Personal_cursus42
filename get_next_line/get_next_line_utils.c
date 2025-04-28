/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapere <alvapere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:49:14 by alvapere          #+#    #+#             */
/*   Updated: 2025/04/28 12:30:36 by alvapere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *ptr)
{
	int	i;

	i = 0;
	while (ptr[i] != '\0')
		i++;
	return (i);
}


size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;

	if (size == 0)
		return (ft_strlen((char *)src));
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen((char *)src));
}

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	src_l;
	unsigned int	dest_l;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	dest_l = ft_strlen(dest);
	src_l = ft_strlen(src);
	i = dest_l;
	j = 0;
	if (size <= dest_l)
		return (src_l + size);
	while (i < size - 1 && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest_l + src_l);
}

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}

void	*ft_calloc(size_t nmeb, size_t size)
{
	void	*ptr;
	size_t	max;

	max = (size_t) - 1;
	if (nmeb == 0 || size == 0)
		return (malloc(0));
	if (size != 0 && nmeb > max / size)
		return (NULL);
	ptr = malloc(nmeb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, (nmeb * size));
	return (ptr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*aux;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (!s1 || !s2);
			return (NULL);
	aux = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!aux)
		return (NULL);
	ft_strlcpy(aux, s1, len_s1 + 1);
	ft_strlcat(aux, s2, len_s1 + len_s2 + 1);
}
