/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapere <alvapere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:10:25 by alvapere          #+#    #+#             */
/*   Updated: 2025/04/22 16:06:31 by alvapere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief:Separar un string (s) en múltiples subcadenas 
///(palabras), usando un caracter delimitador (c).
/// @param s:un string puntero.
/// @param c:caracter delimitador.
/// @return: el resulltado de el string con los delimitadores.

static int	count_letters(const char *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static int	count_words(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*word_dup(const char *s, int len)
{
	char	*word;
	int		i;

	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	free_all(char **arr, int words)
{
	while (words--)
		free(arr[words]);
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		letters;

	if (!s)
		return (NULL);
	res = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s && *s != c)
		{
			letters = count_letters(s, c);
			res[i] = word_dup(s, letters);
			if (!res[i++])
				return (free_all(res, i), NULL);
			s += letters;
		}
	}
	res[i] = NULL;
	return (res);
}
