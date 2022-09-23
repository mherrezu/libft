/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 15:08:43 by mherrezu          #+#    #+#             */
/*   Updated: 2022/09/23 16:06:54 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum (int c)
{
	//tener en cuenta cambiar el tipo de dato que recibe y debemos utilizar
	while (c >= 48 && c <= 57 || c >= 65 && c <= 90 || c >= 97 && c <= 122)
	{
		return (1);
		break;
	}
	else
		return (0);
}
