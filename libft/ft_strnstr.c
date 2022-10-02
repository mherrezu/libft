/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 16:55:43 by mherrezu          #+#    #+#             */
/*   Updated: 2022/10/02 17:55:56 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//locates the first occurrence of the null-terminated string needle in the
//string haystack, where not more than len characters are searched.  
//Characters that appear after a '//\0' character are not searched.
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned char	*h;
	unsigned char	*n;
	char			*n_res;
	unsigned int	c;

	h = (unsigned char *) haystack;
	n = (unsigned char *) needle;
	c = 0;
}
