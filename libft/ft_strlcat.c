/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapere <alvapere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:10:21 by alvapere          #+#    #+#             */
/*   Updated: 2025/04/08 15:11:15 by alvapere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
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