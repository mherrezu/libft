/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 09:27:29 by mherrezu          #+#    #+#             */
/*   Updated: 2022/09/28 19:36:57 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	c;
	int	sign;
	int	result;

	c = 0;
	while (str[c] == ' ' || str[c] == '\n' || str[c] == '\f'
		|| str[c] == '\r' || str[c] == '\t' || str[c] == '\v')
	{
		c++;
	}
	sign = 1;
	while (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			sign = sign * (-1);
		c++;
	}
	result = 0;
	while (str[c] >= '0' && str[c] <= '9')
	{	
		result = (result * 10) + (str[c] - 48);
		c++;
	}
	return (result * sign);
}
/*int	main()
{
	char	str[] = " ---+--+1234ab567";

	printf("El programa: %d\n", atoi(str));
	printf("%d", ft_atoi(str));
	return(0);
}*/
