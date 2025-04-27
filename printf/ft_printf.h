/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapere <<alvapere@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 11:22:41 by alvapere          #+#    #+#             */
/*   Updated: 2025/04/27 12:25:12 by alvapere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_print_char(int character);
int	ft_print_unsigned(unsigned int n);
int	ft_printf(char const *s, ...);
int	ft_print_number(int n);
int	ft_print_string(char *str);
int	ft_print_hexalower(unsigned long long n);
int	ft_print_hexaupper(unsigned int n);
int	ft_print_pointer(void *ptr);

#endif