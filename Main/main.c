/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gletilly <gletilly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 06:00:45 by gletilly          #+#    #+#             */
/*   Updated: 2024/10/18 06:03:09 by gletilly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void to_upper(unsigned int i, char *c)
{
    (void)i;
    *c = ft_toupper(*c);
}

char to_upper_mapi(unsigned int i, char c)
{
    return ft_toupper(c);
}

int main(void)
{
    char str1[] = "Hello, World!";
    char *str2 = ft_strdup("abcdefghijklmnopqrstuvwxyz");
    
    if (!str2) {
        fprintf(stderr, "Échec de l'allocation de mémoire\n");
        return 1;
    }

    printf("Test de ft_striteri :\n");
    printf("Avant : %s\n", str1);
    ft_striteri(str1, to_upper);
    printf("Après : %s\n\n", str1);

    printf("Test de ft_strmapi :\n");
    printf("Avant : %s\n", str2);
    char *str3 = ft_strmapi(str2, to_upper_mapi);
    
    if (!str3) {
        fprintf(stderr, "Échec de l'allocation de mémoire\n");
        free(str2);
        return 1;
    }

    printf("Après : %s\n", str3);

    free(str2);
    free(str3);

    return 0;
}