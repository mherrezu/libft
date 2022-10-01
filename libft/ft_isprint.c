/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 18:29:32 by mherrezu          #+#    #+#             */
/*   Updated: 2022/10/01 12:20:42 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Checks if the given character can be printed
int	ft_isprint(int c)
{
	if (c >= 32 & c <= 126)
		return (1);
	else
		return (0);
}
