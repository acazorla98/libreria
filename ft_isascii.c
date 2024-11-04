/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazorla <acazorla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:18:42 by acazorla          #+#    #+#             */
/*   Updated: 2024/10/21 15:59:27 by acazorla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*int	main()
{
	char	prueba = '3';
	char	prueba2 = 'a';
	char	prueba3 = '?';
	char	prueba4 = 'ñ';
	int		ascii;

	printf ("%c", prueba);
	ascii = ft_isascii(prueba);
	printf ("	%d\n", ascii);
	printf ("%c", prueba2);
	ascii = ft_isascii(prueba2);
	printf ("	%d\n", ascii);
	printf ("%c", prueba3);
	ascii = ft_isascii(prueba3);
	printf ("	%d\n", ascii);
	printf ("%c", prueba4);
	ascii = ft_isascii(prueba4);
	printf ("	%d\n", ascii);
}*/