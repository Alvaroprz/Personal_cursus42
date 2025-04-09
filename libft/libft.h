/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapere <alvapere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:45:33 by alvapere          #+#    #+#             */
/*   Updated: 2025/04/09 12:05:25 by alvapere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <stdio.h>

int				ft_atoi(int c);
int				ft_bzero(void *s, size_t n);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
int				*ft_memset(void *ptr, int value, size_t num);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
int				ft_strlen(char *str);
int				ft_tolower(int c);
int				ft_tolower(int c);
char			ft_strcpy(char *dest, char *src);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
char			*ft_strnstr(const char *big, const char *little, size_t len);
#endif

