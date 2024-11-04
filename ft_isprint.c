/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazorla <acazorla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:18:42 by acazorla          #+#    #+#             */
/*   Updated: 2024/10/21 15:59:40 by acazorla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*int	main()
{
	char	prueba = '3';
	char	prueba2 = '\0';
	char	prueba3 = 'A';
	char	prueba4 = ' ';
	int		prin;

	printf ("%c", prueba);
	prin = ft_isprint(prueba);
	printf ("	%d\n", prin);
	printf ("%c", prueba2);
	prin = ft_isprint(prueba2);
	printf ("	%d\n", prin);
	printf ("%c", prueba3);
	prin = ft_isprint(prueba3);
	printf ("	%d\n", prin);
	printf ("%c", prueba4);
	prin = ft_isprint(prueba4);
	printf ("	%d\n", prin);
}*/