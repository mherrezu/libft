/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 18:34:16 by mherrezu          #+#    #+#             */
/*   Updated: 2022/10/01 12:34:02 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Returns the length of the given null-terminated byte string 
//that is, the number of characters in a character array whose 
//first element is pointed to by str up to and not including the 
//first null character.
size_t	ft_strlen(const char *str)
{
	int	n;
	int	c;

	n = 0;
	c = 1;
	while (str[n] <= '\0')
	{
		c++;
		n++;
	}
	return (c);
}
