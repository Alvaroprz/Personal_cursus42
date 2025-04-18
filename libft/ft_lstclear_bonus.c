/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapere <<alvapere@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 12:52:02 by alvapere          #+#    #+#             */
/*   Updated: 2025/04/18 13:03:36 by alvapere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Elimina y libera el nodo ’lst’ dado y todos los
// consecutivos de ese nodo, utilizando la función
// ’del’ y free(3).
// Al final, el puntero a la lista debe ser NULL.
/// @param lst: la dirección de un puntero a un nodo. 
/// @param del: un puntero a función utilizado para eliminar
// el contenido de un nodo.

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list  *aux;
    t_list  *aux2;

    aux = *lst;
    while (aux)
    {
        aux2 = aux->next;
        ft_lstdelone(aux,del);
        aux = aux2;
    }
    *lst = NULL;
}