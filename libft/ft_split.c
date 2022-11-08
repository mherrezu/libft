/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:23:03 by mherrezu          #+#    #+#             */
/*   Updated: 2022/11/03 19:49:01 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*clean(char *str)
{
	int		c;
	size_t	i;

	c = 0;
	while (str[c] == ' ' || str[c] == '\n' || str[c] == '\f'
		|| str[c] == '\r' || str[c] == '\t' || str[c] == '\v')
	{
		c++;
	}
	i = ft_strlen(str);
	//printf("i - %zu\n", i);
	while (str[i--] == ' ' || str[i--] == '\n' || str[i--] == '\f'
		|| str[i--] == '\r' || str[i--] == '\t' || str[i--] == '\v')
	{
		i--;
	}
	//printf("i - %zu\n", i);
	return (ft_substr(str, c, i));
}

int	count_words(char *s, char c)
{
	int	c_words;
	int	i;

	c_words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			c_words++;
		i++;
	}
	return (c_words);
}

int	count_letter(char *s, char c)
{
	int	c_letter;
	int	i;

	c_letter = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			c_letter++;
		i++;
	}
	return (c_letter);
}

void	fill_letter(char *s, char *array, char c)
{
	int	n;
	int	i;

	n = 0;
	i = 0;
	while (s[n])
	{
		if (s[n] == c)
		{
			array[i] = '\0';
			break ;
		}
		array[i] = s[n];
		n++;
		i++;
	}
	array[i] = '\0';
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	char	*str;
	int		row;
	int		col;
	int		i;

	str = clean((char *)s);
	printf("str - %s\n", str);
	row = count_words(str, c) + 1;
	array = malloc(row * sizeof(char *));
	if (!array)
		return (0);
	i = 0;
	col = 0;
	while (i < row)
	{
		col = (count_letter(str, c) + 1);
		array[i] = malloc(col * sizeof(char));
		if (!array)
			return (0);
		fill_letter(str, array[i], c);
		i++;
		str = str + col;
	}
	i--;
	return (array);
}

int	main(void)
{
	char const	*s;
	char		c;
	char		**array;
	int			count;

	s = "   ola   ";
	c = ' ';
	count = 0;
	array = ft_split(s, c);
	printf("0 - %s\n", array[0]);
	printf("1 - %s\n", array[1]);
	printf("2 - %s\n", array[2]);
	printf("3 - %s\n", array[3]);
	printf("4 - %s\n", array[4]);
	printf("5 - %s\n", array[5]);
	printf("4 - %s\n", array[6]);
	return (0);
}
