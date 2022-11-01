/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:48:03 by mherrezu          #+#    #+#             */
/*   Updated: 2022/11/01 19:02:59 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Itera la lista ’lst’ y aplica la función ’f’ en el
contenido de cada nodo. */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst)
	{
		f(lst -> content);
		lst = lst -> next;
	}
}
