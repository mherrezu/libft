/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 19:04:21 by mherrezu          #+#    #+#             */
/*   Updated: 2022/09/22 19:58:05 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	ft_isalpha(char c)
{	
	if (c >= 65 && c <= 90)
		return ('0');
	if (c >= 97 && c <= 122)
		return ('0');
	else
		return ('1');
}
/*int main (void)
{
	char c;
	c = '8';

	printf ("%c", ft_isalpha(c));
	return(0);
}*/
