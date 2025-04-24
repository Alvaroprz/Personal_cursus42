/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapere <<alvapere@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 11:00:25 by alvapere          #+#    #+#             */
/*   Updated: 2025/04/24 12:02:24 by alvapere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

int	ft_print_char(int character)
{
	write(1, &character, 1);
	return (1);
}

int ft_printf(char const *, ...)
{
    
}