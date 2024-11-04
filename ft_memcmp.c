/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazorla <acazorla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:35:25 by acazorla          #+#    #+#             */
/*   Updated: 2024/10/22 09:04:13 by acazorla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s1 + i) != *((unsigned char *)s2 + i))
			return (*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i));
		i++;
	}
	return (0);
}

/*int main()
{
	unsigned char	hilo1[] = "hola camarada";
	unsigned char	hilo2[] = "hola caracola";
	size_t			espacios;
	int				resultado;

	printf ("los dos hilos a comparar:\n");
	printf ("	%s\n", hilo1);
	printf ("	%s\n", hilo2);
	espacios = 5;
	printf ("compara los primeros %d espacios ", espacios);
	resultado = ft_memcmp(hilo1, hilo2, espacios);
	if (resultado == 0)
		printf ("son iguales\n");
	else
		printf ("son diferentes\n");
	espacios = 10;
	printf ("comparando los primeros %d espacios ", espacios);
	resultado = ft_memcmp(hilo1, hilo2, espacios);
	if (resultado == 0)
		printf ("son iguales\n");
	else
		printf ("son diferentes\n");
	return (0);
}*/
