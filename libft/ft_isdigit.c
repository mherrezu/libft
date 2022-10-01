/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 19:58:28 by mherrezu          #+#    #+#             */
/*   Updated: 2022/10/01 12:10:53 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Checks if the given character is a numeric character
int	ft_isdigit(int c)
{
	if (c >= 48 & c <= 57)
		return (1);
	else
		return (0);
}	
