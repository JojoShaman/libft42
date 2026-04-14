/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   main.c                                            :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: srosu <srosu@student.42belgium.be>        #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/04/14 11:12:49 by srosu            #+#    #+#              */
/*   Updated: 2026/04/14 11:50:32 by srosu           ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	/*FT_ISALPHA*/
	printf("-ft_isalpha-\n");
	if (ft_isalpha('a'))
		printf("'a' : alpha\n");
	else
		printf("'a' : not alpha\n");
	if (ft_isalpha('B'))
		printf("'B' : alpha\n");
	else
		printf("'B' : not alpha\n");
	if (ft_isalpha('4'))
		printf("'4' : alpha\n");
	else
		printf("'4' : not alpha\n");
	if (ft_isalpha('@'))
		printf("'@' : alpha\n");
	else
		printf("'@' : not alpha\n");
	printf("\n\n");
	/*FT_ISDIGIT*/
	printf("-ft_isdigit-\n");
	if (ft_isdigit('4'))
		printf("'4' : digit\n");
	else
		printf("'4' : not digit\n");
	if (ft_isdigit('z'))
		printf("'z' : digit\n");
	else
		printf("'z' : not digit\n");
	if (ft_isdigit('%'))
		printf("'%%' : digit\n");
	else
		printf("'%%' : not digit\n");
	if (ft_isdigit('2'))
		printf("'2' : digit\n");
	else
		printf("'2' : not digit\n");
	printf("\n\n");
	/*FT_ISALNUM*/
	printf("-ft_isalnum-\n");
	if (ft_isalnum('#'))
		printf("'#' : alphanumeric\n");
	else
		printf("'#' : not alphanumeric\n");
	if (ft_isalnum('9'))
		printf("'9' : alphanumeric\n");
	else
		printf("'9' : not alphanumeric\n");
	if (ft_isalnum('&'))
		printf("'&' : alphanumeric\n");
	else
		printf("'&' : not alphanumeric\n");
	if (ft_isalnum('0'))
		printf("'0' : alphanumeric\n");
	else
		printf("'0' : not alphanumeric\n");
	printf("\n\n");
	/*FT_ISASCII*/
	printf("-ft_isascii-\n");
	if (ft_isascii('P'))
		printf("'P' : ascii\n");
	else
		printf("'P' : not ascii\n");
	if (ft_isascii('\xFF'))
		printf("'\xFF' : ascii\n");
	else
		printf("'\xFF' : not ascii\n");
	if (ft_isascii('*'))
		printf("'*' : ascii\n");
	else
		printf("'*' : not ascii\n");
	if (ft_isascii('\xFA'))
		printf("'\xFA' : ascii\n");
	else
		printf("'\xFA' : not ascii\n");
	printf("\n\n");
	/*FT_ISPRINT*/
	printf("-ft_isprint-\n");
	if (ft_isprint('X'))
		printf("'X' : printable\n");
	else
		printf("'x' : not printable\n");
	if (ft_isprint('o'))
		printf("'o' : printable\n");
	else
		printf("'o' : not printable\n");
	if (ft_isprint('\t'))
		printf("'\t' : printable\n");
	else
		printf("'\t' : not printable\n");
	if (ft_isprint('\xFB'))
		printf("'\xFB' : printable\n");
	else
		printf("'\xFB' : not printable\n");
	printf("\n\n");
	return (0);
}
