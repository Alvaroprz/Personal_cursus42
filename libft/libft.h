/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapere <alvapere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:45:33 by alvapere          #+#    #+#             */
/*   Updated: 2025/04/09 16:43:05 by alvapere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <stdio.h>

int			    ft_atoi(char *str);
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
int				ft_toupper(int c);
char			ft_strlcpy(char *dest, char *src);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
char			*ft_strnstr(const char *big, const char *little, size_t len);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
void			*ft_memcpy(void *dest_str, const void *src_str, size_t n);
char			*ft_strdup(const char *s);
void			*ft_memmove(void *dest, const void *src, size_t n);
int				*ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_calloc(size_t nmemb, size_t size);
void			*ft_memchr(const void *s, int c, size_t n);
char			*ft_substr(char const *s, unsigned int start,size_t len);
#endif
