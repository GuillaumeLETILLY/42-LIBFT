/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gletilly <gletilly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:53:46 by gletilly          #+#    #+#             */
/*   Updated: 2024/10/14 16:47:52 by gletilly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*r;

	r = NULL;
	while (*s)
	{
		if (*s == (char)c)
			r = (char *)s;
		s++;
	}
	if (*s == (char)c)
		r = (char *)s;
	return (r);
}
