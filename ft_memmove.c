/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazorla <acazorla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 20:20:10 by acazorla          #+#    #+#             */
/*   Updated: 2024/10/21 16:56:36 by acazorla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	if ((src == 0 && dest == 0) || count < 0)
		return (dest);
	if (dest > src)
		while (count--)
			*((unsigned char *)dest + count) = *((unsigned char *)src + count);
	else
		ft_memcpy(dest, src, count);
	return (dest);
}

/*int	main()
{
	char	*h1 = "asdfghjkl";
	char	*h2 = "wasd";
	int		numero = 3;
	printf ("hilos originales:\n");
	printf ("	%s\n", h1);
	printf ("	%s\n", h2);
	printf ("hilo ya modificado:\n");
	ft_memmove(h1, h2, numero);
	printf ("	%s\n", h1);
}*/
