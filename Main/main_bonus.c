/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gletilly <gletilly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 05:30:05 by gletilly          #+#    #+#             */
/*   Updated: 2024/10/18 05:30:10 by gletilly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Fonction pour convertir une chaîne en majuscules
void to_upper(void *content)
{
    char *str = (char *)content;
    for (int i = 0; str[i]; i++)
        str[i] = ft_toupper(str[i]);
}

// Fonction pour convertir une chaîne en minuscules
void to_lower(void *content)
{
    char *str = (char *)content;
    for (int i = 0; str[i]; i++)
        str[i] = ft_tolower(str[i]);
}

// Fonction pour ft_lstmap qui retourne une copie en minuscules
void *map_to_lower(void *content)
{
    char *str = (char *)content;
    char *new_str = ft_strdup(str);
    if (new_str)
        to_lower(new_str);
    return new_str;
}

int main(void)
{
    t_list *liste = NULL;
    t_list *nouvel_element;
    t_list *dernier;
    t_list *nouvelle_liste;
    int taille;

    // Test de ft_lstnew
    printf("Test de ft_lstnew :\n");
    nouvel_element = ft_lstnew(ft_strdup("Premier"));
    printf("Contenu du nouvel élément : %s\n\n", (char *)nouvel_element->content);

    // Test de ft_lstadd_front
    printf("Test de ft_lstadd_front :\n");
    ft_lstadd_front(&liste, nouvel_element);
    ft_lstadd_front(&liste, ft_lstnew(ft_strdup("Deuxième")));
    ft_lstadd_front(&liste, ft_lstnew(ft_strdup("Troisième")));
    
    // Affichage de la liste
    printf("Liste après ajouts : ");
    for (t_list *temp = liste; temp; temp = temp->next)
        printf("%s -> ", (char *)temp->content);
    printf("NULL\n\n");

    // Test de ft_lstsize
    printf("Test de ft_lstsize :\n");
    taille = ft_lstsize(liste);
    printf("Taille de la liste : %d\n\n", taille);

    // Test de ft_lstlast
    printf("Test de ft_lstlast :\n");
    dernier = ft_lstlast(liste);
    printf("Contenu du dernier élément : %s\n\n", (char *)dernier->content);

    // Test de ft_lstadd_back
    printf("Test de ft_lstadd_back :\n");
    ft_lstadd_back(&liste, ft_lstnew(ft_strdup("Quatrième")));
    printf("Liste après ajout à la fin : ");
    for (t_list *temp = liste; temp; temp = temp->next)
        printf("%s -> ", (char *)temp->content);
    printf("NULL\n\n");

    // Test de ft_lstiter
    printf("Test de ft_lstiter (conversion en majuscules) :\n");
    ft_lstiter(liste, to_upper);
    printf("Liste après conversion : ");
    for (t_list *temp = liste; temp; temp = temp->next)
        printf("%s -> ", (char *)temp->content);
    printf("NULL\n\n");

    // Test de ft_lstmap
    printf("Test de ft_lstmap (création d'une nouvelle liste en minuscules) :\n");
    nouvelle_liste = ft_lstmap(liste, map_to_lower, free);
    printf("Nouvelle liste : ");
    for (t_list *temp = nouvelle_liste; temp; temp = temp->next)
        printf("%s -> ", (char *)temp->content);
    printf("NULL\n\n");

    // Test de ft_lstdelone
    printf("Test de ft_lstdelone :\n");
    ft_lstdelone(ft_lstlast(liste), free);
    printf("Liste après suppression du dernier élément : ");
    for (t_list *temp = liste; temp; temp = temp->next)
        printf("%s -> ", (char *)temp->content);
    printf("NULL\n\n");

    // Test de ft_lstclear
    printf("Test de ft_lstclear :\n");
    ft_lstclear(&liste, free);
    printf("Liste après clear : %s\n\n", liste ? "Non vide" : "NULL");

    // Nettoyage de la nouvelle_liste
    ft_lstclear(&nouvelle_liste, free);

    return 0;
}