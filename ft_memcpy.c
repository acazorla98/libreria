/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazorla <acazorla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:06:35 by acazorla          #+#    #+#             */
/*   Updated: 2024/10/25 10:16:48 by acazorla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t count)
{
	char			*dest;
	const char		*orig;
	unsigned int	n;

	dest = dst;
	orig = src;
	if (dst == 0 && src == 0)
		return (0);
	n = 0;
	while (n < count)
	{
		dest[n] = orig[n];
		n++;
	}
	return (dst);
}

/*int	main()
{
	char	hilo[] = "ESTE ES EL HILO A COPIAR";
	char	hilo2[] = "se copiara en este hilo";
	size_t	num = 10;
	
	printf ("hilos originales:\n");
	printf ("	%s\n", hilo);
	printf ("	%s\n", hilo2);
	printf ("segundo hilo ya modificado:\n");
	ft_memcpy(hilo2, hilo, num);
	printf ("	%s\n", hilo2);
}*/