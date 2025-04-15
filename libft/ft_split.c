/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapere <alvapere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:10:25 by alvapere          #+#    #+#             */
/*   Updated: 2025/04/15 14:31:00 by alvapere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_letters(const char *s, char sep)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == sep)
			i++;
		if (s[i])
		{
			while (s[i] && s[i] != sep)
				i++;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	char	**resultado;
	int		j;
	int		i;

	i = 0;
	j = 0;
	**resultado = (char **)malloc((count_letters(s, c) + 1) * sizeof(char *));
	if (!resultado)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		j = count_letters(&s[i], c);
		resultado[]
	}

}
