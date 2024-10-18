/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gletilly <gletilly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 21:20:31 by gletilly          #+#    #+#             */
/*   Updated: 2024/10/16 21:32:44 by gletilly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	char	*result;
	char	*copy;

	s1len = strlen(s1);
	s2len = strlen(s2);
	result = (char *)malloc(s1len + s2len + 1);
	if (!result)
		return (NULL);
	copy = result;
	while (*s1)
		*copy++ = *s1++;
	while (*s2)
		*copy++ = *s2++;
	*copy = '\0';
	return (result);
}
