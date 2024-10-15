/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gletilly <gletilly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:26:29 by gletilly          #+#    #+#             */
/*   Updated: 2024/10/15 14:48:21 by gletilly         ###   ########.fr       */
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

	printf("\nstrnstr : Test 1 :\n");
	printf("ft_strnstr : Résultat : %s\n", ft_strnstr(haystack, needle1, 13));

	return 0;
}

