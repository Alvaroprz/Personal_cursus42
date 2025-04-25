/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapere <alvapere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 11:00:25 by alvapere          #+#    #+#             */
/*   Updated: 2025/04/25 14:08:14 by alvapere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(int character)
{
	write(1, &character, 1);
	return (1);
}

int	ft_printf(char const *s, ...)
{
	int		i;
	int		size;
	va_list	argument;

	i = 0;
	size = 0;
	va_start(argument, s);
	while (s[i] != '\0')
	{
		if (s[i] == '%')
			size += ft_select_format(argument, s[i + 1]);
		else
			size += ft_print_char(s[i]);
		i++;
	}
	va_end(argument);
	return (size);
}

int	ft_select_format(va_list arguments, const char str)
{
	if (str == 'c')
		return (ft_print_char(va_arg(arguments, int)));
	if (str == 's')
		return (ft_print_string(va_arg(arguments, char *)));
	if (str == 'd' || str == 'i')
		return (ft_print_number(va_arg(arguments, int)));
}
