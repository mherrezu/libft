/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 16:36:29 by mherrezu          #+#    #+#             */
/*   Updated: 2022/10/02 19:18:40 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//locates the first occurrence of c (converted to an unsigned char) in string s.
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_aux;
	unsigned char	c_aux;
	unsigned int	counter;

	s_aux = (unsigned char *) s;
	c_aux = (unsigned char) c;
	counter = 0;
	while (counter < n && s_aux[counter] != '\0')
	{
		if (s_aux[counter] != c_aux)
			counter++;
		if (s_aux[counter] == c_aux)
			return (s_aux - c_aux);
	}
	return (0);
}
