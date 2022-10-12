/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:23:03 by mherrezu          #+#    #+#             */
/*   Updated: 2022/10/12 19:40:12 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char *s, char c)
{
	int		c_words;
	int		i;

	c_words = 1;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			c_words++;
		i++;
	}
	printf("Palabras: %i", c_words);
	return (c_words);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	char	*str;

	str = (char *) s;
	count_words(str, c);
	return (array);
}

int	main(void)
{
	char const	*s;
	char		c;

	s = "hola como te llamas";
	c = ' ';
	ft_split(s, c);
	return (0);
}
