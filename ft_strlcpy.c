/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazorla <acazorla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:11:44 by acazorla          #+#    #+#             */
/*   Updated: 2024/10/21 18:11:43 by acazorla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	c;
	unsigned int	i;

	c = 0;
	i = 0;
	while (src[c] != '\0')
		++c;
	if (size == 0)
		return (c);
	while (src[i] != '\0' && i < (size -1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (c);
}

/*int	main()
{
	char		hilo[] = "musculo";
	char		hilo2[] = "esternocleidomastoideo";
	unsigned int tam;

	tam = 6;
	printf ("originales :\n");
	printf ("	%s\n", hilo);
	printf ("	%s\n", hilo2);
	ft_strlcpy(hilo2, hilo, tam);
	printf ("copia :\n");
	printf ("	%s\n", hilo2);
}*/