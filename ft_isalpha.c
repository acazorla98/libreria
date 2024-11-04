/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazorla <acazorla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:18:42 by acazorla          #+#    #+#             */
/*   Updated: 2024/10/21 15:59:20 by acazorla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/*int	main()
{
	char	prueba = '3';
	char	prueba2 = 'a';
	char	prueba3 = 'A';
	char	prueba4 = '?';
	int		alpha;

	printf ("%c", prueba);
	alpha = ft_isalpha(prueba);
	printf ("	%d\n", alpha);
	printf ("%c", prueba2);
	alpha = ft_isalpha(prueba2);
	printf ("	%d\n", alpha);
	printf ("%c", prueba3);
	alpha = ft_isalpha(prueba3);
	printf ("	%d\n", alpha);
	printf ("%c", prueba4);
	alpha = ft_isalpha(prueba4);
	printf ("	%d\n", alpha);
}*/