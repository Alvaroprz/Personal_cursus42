/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapere <alvapere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:49:27 by alvapere          #+#    #+#             */
/*   Updated: 2025/04/28 12:30:03 by alvapere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1234
# endif

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int				ft_strlen(char *ptr);
size_t			ft_strlcpy(char *dest, const char *src, size_t size);
unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size);
void			ft_bzero(void *s, size_t n);
void			*ft_calloc(size_t nmeb, size_t size);
char			*ft_strjoin(char const *s1, char const *s2);

#endif