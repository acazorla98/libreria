/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazorla <acazorla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:15:40 by acazorla          #+#    #+#             */
/*   Updated: 2024/10/21 15:29:45 by acazorla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include "libft.h"

int	ft_tolower(int c)
{
	while (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

/*int main()
{
	char	prueba = 'a';
	char	prueba2 = 'A';
	char	prueba3 = '1';
	char	prueba4 = '?';
	char	prueba5 = 'Z';
	char	mayus;
	
	printf ("prueba 1\n");
	printf ("	%c\n", prueba);
	mayus = ft_tolower(prueba);
	printf ("	%c\n", mayus);
	printf ("prueba 2\n");
	printf ("	%c\n", prueba2);
	mayus = ft_tolower(prueba2);
	printf ("	%c\n", mayus);
	printf ("prueba 3\n");
	printf ("	%c\n", prueba3);
	mayus = ft_tolower(prueba3);
	printf ("	%c\n", mayus);
	printf ("prueba 4\n");
	printf ("	%c\n", prueba4);
	mayus = ft_tolower(prueba4);
	printf ("	%c\n", mayus);
	printf ("prueba 5\n");
	printf ("	%c\n", prueba5);
	mayus = ft_tolower(prueba5);
	printf ("	%c\n", mayus);
}*/