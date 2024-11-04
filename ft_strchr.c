/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazorla <acazorla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:17:12 by acazorla          #+#    #+#             */
/*   Updated: 2024/10/21 15:28:42 by acazorla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c && *s)
		s++;
	if (*s)
		return ((char *) s);
	else if (!*s && 0 == (char)c)
		return ((char *) s);
	else
		return (0);
}

/*int main()
{
	const char	prueba[] = "Chernobyl";
	int			caracter = 'n';
	char		*num;

	printf ("hilo:\n");
	printf ("	%s\n", prueba);
	printf ("caracter a buscar:\n");
	printf ("	%c\n", caracter);
	num = ft_strchr(prueba, caracter);
	printf ("posicion del caracter:\n");
	printf ("	%p\n", num);
}*/