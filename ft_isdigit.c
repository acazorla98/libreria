/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazorla <acazorla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:18:42 by acazorla          #+#    #+#             */
/*   Updated: 2024/10/21 15:59:33 by acazorla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/*int	main()
{
	char	prueba = '3';
	char	prueba2 = 'a';
	char	prueba3 = 'A';
	char	prueba4 = '?';
	int		num;

	printf ("%c", prueba);
	num = ft_isdigit(prueba);
	printf ("	%d\n", num);
	printf ("%c", prueba2);
	num = ft_isdigit(prueba2);
	printf ("	%d\n", num);
	printf ("%c", prueba3);
	num = ft_isdigit(prueba3);
	printf ("	%d\n", num);
	printf ("%c", prueba4);
	num = ft_isdigit(prueba4);
	printf ("	%d\n", num);
}*/
