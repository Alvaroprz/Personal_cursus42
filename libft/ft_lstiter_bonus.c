/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapere <<alvapere@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 13:06:26 by alvapere          #+#    #+#             */
/*   Updated: 2025/04/18 13:12:34 by alvapere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Itera la lista ’lst’ y aplica la función ’f’ en el
// contenido de cada nodo.
/// @param lst : un puntero al primer nodo.
/// @param f : un puntero a la función que utilizará cada nodo.
void ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (lst == NULL || f == NULL)
        return;
    while (lst)
    {
        f(lst->content);
        lst = lst->next;
    }
}