/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazorla <acazorla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:32:58 by acazorla          #+#    #+#             */
/*   Updated: 2024/10/25 11:09:11 by acazorla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == (unsigned char)c)
			return ((void *)((unsigned char *)s + i));
		i++;
	}
	return (0);
}

/*int	main()
{
	const char	hilo[] = "monasterio de piedra";
	int			caracter = 'p';
	size_t		num;
	int			resultado;
	
	num = 8;
	printf ("hilo en el que buscar:\n");
	printf ("	%s\n", hilo);
	printf ("busca el caracter ");
	printf ("%c ", caracter);
	printf ("en los primeros ");
	printf ("%d ", num);
	printf ("espacios\n");
	resultado = ft_memchr(hilo, caracter, num);
	printf ("	%p\n\n", resultado);
	num = 15;
	printf ("busca el caracter ");
	printf ("%c ", caracter);
	printf ("en los primeros ");
	printf ("%d ", num);
	printf ("espacios\n");
	resultado = ft_memchr(hilo, caracter, num);
	printf ("	%p\n\n", resultado);
	caracter = 'o';
	printf ("busca el caracter ");
	printf ("%c ", caracter);
	printf ("en los primeros ");
	printf ("%d ", num);
	printf ("espacios\n");
	resultado = ft_memchr(hilo, caracter, num);
	printf ("	%p\n", resultado);
	return (0);
}*/
