/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazorla <acazorla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:13:21 by acazorla          #+#    #+#             */
/*   Updated: 2024/10/21 15:29:49 by acazorla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include "libft.h"

int	ft_toupper(int c)
{
	while (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

/*int main()
{
	char	prueba = 'a';
	char	prueba2 = 'A';
	char	prueba3 = '1';
	char	prueba4 = '?';
	char	prueba5 = 'z';
	char	mayus;
	
	printf ("prueba 1\n");
	printf ("	%c\n", prueba);
	mayus = ft_toupper(prueba);
	printf ("	%c\n", mayus);
	printf ("prueba 2\n");
	printf ("	%c\n", prueba2);
	mayus = ft_toupper(prueba2);
	printf ("	%c\n", mayus);
	printf ("prueba 3\n");
	printf ("	%c\n", prueba3);
	mayus = ft_toupper(prueba3);
	printf ("	%c\n", mayus);
	printf ("prueba 4\n");
	printf ("	%c\n", prueba4);
	mayus = ft_toupper(prueba4);
	printf ("	%c\n", mayus);
	printf ("prueba 5\n");
	printf ("	%c\n", prueba5);
	mayus = ft_toupper(prueba5);
	printf ("	%c\n", mayus);
}*/