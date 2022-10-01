/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 18:31:22 by mherrezu          #+#    #+#             */
/*   Updated: 2022/10/01 11:36:24 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_strlen(const char *str);
int		ft_strlcpy(char *dest, char *src, unsigned int size);
int		ft_strlcat(char *dest, char *src, unsigned int size);
int		ft_strncmp(const char *s1, const char *s2, unsigned int n);
char	*strnstr(char *haystack, char *needle, int len);
int		ft_atoi(const char *str);

#endif
