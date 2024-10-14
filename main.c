/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gletilly <gletilly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:26:29 by gletilly          #+#    #+#             */
/*   Updated: 2024/10/15 01:10:11 by gletilly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <ctype.h>
#include <strings.h>
#include <bsd/string.h>

int main(void)
{
	// ISALPHA
	char test_chars[] = {'0', 'a', 'A', 'Z', 'z', ' ', '5', '+', '\t', '\0'};
	int num_tests = sizeof(test_chars) / sizeof(test_chars[0]);

	printf("\nisalpha : \n\n");
	for (int i = 0; i < num_tests; i++)
		printf("%c: %d \n", test_chars[i], isalpha(test_chars[i]));
	printf("\nft_isalpha : \n\n");
	for (int i = 0; i < num_tests; i++)
		printf("%c: %d \n", test_chars[i], ft_isalpha(test_chars[i]));

	// TOUPPER
	printf("\ntoupper : \n\n");
	for (int i = 0; i < num_tests; i++)
		printf("%c: %d \n", test_chars[i], toupper(test_chars[i]));
	printf("\nft_toupper : \n\n");
	for (int i = 0; i < num_tests; i++)
		printf("%c: %d \n", test_chars[i], ft_toupper(test_chars[i]));

	// ISDIGIT
	printf("\nisdigit : \n\n");
	for (int i = 0; i < num_tests; i++)
		printf("%c: %d \n", test_chars[i], isdigit(test_chars[i]));
	printf("\nft_isdigit : \n\n");
	for (int i = 0; i < num_tests; i++)
		printf("%c: %d \n", test_chars[i], ft_isdigit(test_chars[i]));

	// TOLOWER
	printf("\ntolower : \n\n");
	for (int i = 0; i < num_tests; i++)
		printf("%c: %d \n", test_chars[i], tolower(test_chars[i]));
	printf("\nft_tolower : \n\n");
	for (int i = 0; i < num_tests; i++)
		printf("%c: %d \n", test_chars[i], ft_tolower(test_chars[i]));

	// ISALNUM
	printf("\nisalnum : \n\n");
	for (int i = 0; i < num_tests; i++)
		printf("%c: %d \n", test_chars[i], isalnum(test_chars[i]));
	printf("\nft_isalnum : \n\n");
	for (int i = 0; i < num_tests; i++)
		printf("%c: %d \n", test_chars[i], ft_isalnum(test_chars[i]));

	// ISASCII
	printf("\nisascii : \n\n");
	for (int i = 0; i < num_tests; i++)
		printf("%c: %d \n", test_chars[i], isascii(test_chars[i]));
	printf("\nft_isascii : \n\n");
	for (int i = 0; i < num_tests; i++)
		printf("%c: %d \n", test_chars[i], ft_isascii(test_chars[i]));

	// ISPRINT
	printf("\nisprint : \n\n");
	for (int i = 0; i < num_tests; i++)
		printf("%c: %d \n", test_chars[i], isprint(test_chars[i]));
	printf("\nft_isprint : \n\n");
	for (int i = 0; i < num_tests; i++)
		printf("%c: %d \n", test_chars[i], ft_isprint(test_chars[i]));

	char test_string[20] = "Hello World";
	char cmp_string[20];
	strcpy(cmp_string, test_string); // Copier pour comparaison
	int asciivar = 'o';

	// STRCHR
	printf("\nstrchr : \n\n");
	printf("%s: %s \n", test_string, strchr(test_string, asciivar));
	printf("\nft_strchr : \n\n");
	printf("%s: %s \n", test_string, ft_strchr(test_string, asciivar));

	// STRRCHR
	printf("\nstrrchr : \n\n");
	printf("%s: %s \n", test_string, strrchr(test_string, asciivar));
	printf("\nft_strrchr : \n\n");
	printf("%s: %s \n", test_string, ft_strrchr(test_string, asciivar));

	// STRNCMP
	printf("\nstrncmp : \n\n");
	printf("%s, %s : %d \n", test_string, cmp_string, strncmp(test_string, cmp_string, 12));
	printf("\nft_strncmp : \n\n");
	printf("%s, %s : %d \n", test_string, cmp_string, ft_strncmp(test_string, cmp_string, 12));

	// STRLEN
	printf("\nstrlen : \n\n");
	printf("%s: %zu \n", test_string, strlen(test_string));
	printf("\nft_strlen : \n\n");
	printf("%s: %zu \n", test_string, ft_strlen(test_string));

	// MEMCHR
	printf("\nmemchr : \n\n");
	printf("%s: %p \n", test_string, memchr(test_string, asciivar, 12));
	printf("\nft_memchr : \n\n");
	printf("%s: %p \n", test_string, ft_memchr(test_string, asciivar, 12));

	// MEMCMP
	printf("\nmemcmp : \n\n");
	printf("%s, %s : %d \n", test_string, cmp_string, memcmp(test_string, cmp_string, 12));
	printf("\nft_memcmp : \n\n");
	printf("%s, %s : %d \n", test_string, cmp_string, ft_memcmp(test_string, cmp_string, 12));

	// BZERO
	printf("\nbzero : \nAvant : '%s'\n", test_string);
	bzero(test_string, 12);
	printf("Après : '%s'\n", test_string);
	strcpy(test_string, cmp_string);
	printf("\nft_bzero : \nAvant : '%s'\n", test_string);
	ft_bzero(test_string, 12);
	printf("Après : '%s'\n", test_string);

	// MEMSET
	printf("\nmemset : \n\n");
	printf("%s: %p \n", test_string, memset(test_string, asciivar, 12));
	printf("\nft_memset : \n\n");
	printf("%s: %p \n", test_string, ft_memset(test_string, asciivar, 12));
	printf("\n");

	// STRNSTR
	const char *haystack = "Hello, World!";
	const char *needle1 = "World";
	const char *needle2 = "world"; // Différent en termes de casse
	const char *needle3 = "";
	const char *needle4 = "Hello";
	const char *needle5 = "Nonexistent";

	size_t len1 = 13; // Longueur suffisante pour inclure "World"
	size_t len2 = 5;  // Longueur insuffisante pour inclure "World"

	// Test 1 : Cherche "World"
	printf("\nstrnstr : Test 1 :\n");
	printf("Résultat : %s\n", strnstr(haystack, needle1, len1));
	printf("ft_strnstr : Résultat : %s\n", ft_strnstr(haystack, needle1, len1));

	// Test 2 : Cherche "world" (case-sensitive)
	printf("\nstrnstr : Test 2 :\n");
	printf("Résultat : %s\n", strnstr(haystack, needle2, len1));
	printf("ft_strnstr : Résultat : %s\n", ft_strnstr(haystack, needle2, len1));

	// Test 3 : Cherche une chaîne vide
	printf("\nstrnstr : Test 3 :\n");
	printf("Résultat : %s\n", strnstr(haystack, needle3, len1));
	printf("ft_strnstr : Résultat : %s\n", ft_strnstr(haystack, needle3, len1));

	// Test 4 : Cherche "Hello"
	printf("\nstrnstr : Test 4 :\n");
	printf("Résultat : %s\n", strnstr(haystack, needle4, len1));
	printf("ft_strnstr : Résultat : %s\n", ft_strnstr(haystack, needle4, len1));

	// Test 5 : Cherche une sous-chaîne non existante
	printf("\nstrnstr : Test 5 :\n");
	printf("Résultat : %s\n", strnstr(haystack, needle5, len1));
	printf("ft_strnstr : Résultat : %s\n", ft_strnstr(haystack, needle5, len1));

	// Test 6 : Limite de recherche trop basse
	printf("\nstrnstr : Test 6 :\n");
	printf("Résultat : %s\n", strnstr(haystack, needle1, len2));
	printf("ft_strnstr : Résultat : %s\n", ft_strnstr(haystack, needle1, len2));

	return 0;
}

