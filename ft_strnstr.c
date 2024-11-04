/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazorla <acazorla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:37:47 by acazorla          #+#    #+#             */
/*   Updated: 2024/10/21 15:29:32 by acazorla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	h;
	size_t	i;

	h = 0;
	if (s2[h] == '\0')
		return ((char *)s1);
	while (s1[h])
	{
		i = 0;
		while (s1[h + i] == s2[i] && (h + i) < n)
		{
			if (s1[h + i] == '\0' && s2[i] == '\0')
				return ((char *)s1 + h);
			else
				i++;
		}
		if (s2[i] == '\0')
			return ((char *)s1 + h);
		else
			h++;
	}
	return (0);
}

/*int main()
{
	const char	hilo[] = "Szeth-son-son-Vallano, Truthless of Shinovar";
	const char	muestra[] = "Truth";
	size_t		num;
	char		*resultado;

	num = 30;
	printf ("busca: %s\n", muestra);
	printf ("dentro de los primeros %d espacios de el hilo:\n", num);
	printf ("	%s\n", hilo);
	resultado = ft_strnstr(hilo, muestra, num);
	printf ("%p\n\n", resultado);
	return (0);
}*/
