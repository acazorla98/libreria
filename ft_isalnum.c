/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazorla <acazorla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:18:42 by acazorla          #+#    #+#             */
/*   Updated: 2024/10/21 15:59:08 by acazorla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include "libft.h"

int	ft_isalnum(int c)
{
	return ((c >= '0' && c <= '9')
		|| (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'));
}

/*int	main()
{
	char	prueba = '3';
	char	prueba2 = 'a';
	char	prueba3 = 'A';
	char	prueba4 = '?';
	int		alnum;

	printf ("%c", prueba);
	alnum = ft_isalnum(prueba);
	printf ("	%d\n", alnum);
	printf ("%c", prueba2);
	alnum = ft_isalnum(prueba2);
	printf ("	%d\n", alnum);
	printf ("%c", prueba3);
	alnum = ft_isalnum(prueba3);
	printf ("	%d\n", alnum);
	printf ("%c", prueba4);
	alnum = ft_isalnum(prueba4);
	printf ("	%d\n", alnum);
}*/