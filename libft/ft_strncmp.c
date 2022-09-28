/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 09:42:54 by mherrezu          #+#    #+#             */
/*   Updated: 2022/09/28 19:36:17 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while (c < n && (s1[c] != '\0' || s2[c] != '\0'))
	{
		if (s1[c] != s2[c])
			return (s1[c] - s2[c]);
			c++;
	}
	return (0);
}
/*int main()
{
	const char s1[] = "holP";
	const char s2[] = "";
	unsigned	int n;

	n = 100;
	
	printf("programa :%d\n", strncmp(s1, s2, n));
	printf("%d", ft_strncmp(s1, s2, n));
	return(0);
}*/
