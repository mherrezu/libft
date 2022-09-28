/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 18:34:16 by mherrezu          #+#    #+#             */
/*   Updated: 2022/09/28 19:12:23 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned long int ft_strlen (const char *str)
{
    int n;
    int  c;
    
    n = 0;
    c = 1;
    while (str[n] <= '\0')
    {
        c++;
        n++;
    }
    return(c);
} 
/*int main (void)
{
	const char *str = "hola";

	printf ("%lu", ft_strlen(str));
	return(0);
}*/