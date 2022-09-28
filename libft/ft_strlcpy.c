/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 10:09:40 by mherrezu          #+#    #+#             */
/*   Updated: 2022/09/28 19:45:52 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char restrict *dest, char restrict *src, unsigned int size)
{
	unsigned int	counter;

	counter = 0;
	while (counter <= (size - 1))
	{
		dest[counter] = src[counter];
		counter++;
	}
	counter--;
	return (counter);
}
