/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 13:33:41 by mherrezu          #+#    #+#             */
/*   Updated: 2022/09/28 19:45:25 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char restrict *dest, char restrict *src, unsigned int size)
{
	unsigned int	d;
	unsigned int	s;
	unsigned int	c;

	d = 0;
	s = 0;
	c = 0;
	while (dest[d] != '\0')
	{
		d++;
		c++;
	}
	while (src[s] != '\0' && c < (size -1))
	{
		dest[d] = src[s];
		d++;
		s++;
		c++;
	}
	dest[d] = '\0';
	return (c);
}
/*int main()
{
	char src[] = "adios";
	char dest[] = "adiosS";
	unsigned int size;
	unsigned int result;

	size = 9;
	printf("%lu", strlcat(dest, src, size));
	result = ft_strlcat(dest, src, size);
	printf("%d", result);
	return(0);
}*/
