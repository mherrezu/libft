/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 12:45:47 by mherrezu          #+#    #+#             */
/*   Updated: 2022/10/02 14:00:21 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//copies len bytes from string src to string dst.  The two strings may overlap;
//the copy is always done in a non-destructive manner.
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_aux;
	unsigned char	*src_aux;
	unsigned int	counter;

	*dst_aux = (unsigned char *)dst;
	*src_aux = (unsigned char *)src;
	counter = 0;
	if (!dst && !src)
		return (dst);
	while (counter < len)
	{
		dst_aux[counter] = src_aux[counter];
		counter++;
	}
	return (dst);
}
