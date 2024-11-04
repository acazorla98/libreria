/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazorla <acazorla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:12:38 by acazorla          #+#    #+#             */
/*   Updated: 2024/10/21 18:47:41 by acazorla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	id;
	unsigned int	is;

	is = ft_strlen(src);
	if (dst == NULL && size == 0)
		return (is);
	id = ft_strlen(dst);
	if (id >= size)
		return (is + size);
	else
		size -= id;
	ft_strlcpy(dst + id, src, size);
	return (id + is);
}

/*int	main()
{
	char			dstino[30] = "hakuna ";
	char			origen[] = "Matara";
	unsigned int	num;
	unsigned int	resultado;
	
	num = 30;
	printf ("originales:\n	%s\n", dstino);
	printf ("	%s\n", origen);
	printf ("tamaño maximo dado %d\n", num);
	resultado = ft_strlcat(dstino, origen, num);
	printf ("hilo de destino tras intentar la concatenación\n	%s\n", dstino);
	printf ("resultado tamaño de los hilos convinados %d\n", resultado);
	if (num < resultado)
		printf ("no se puede completar la concatenación\n");
	else
		printf ("concatenación completada correctamente\n");
	return (0);
}*/