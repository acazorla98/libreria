/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazorla <acazorla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:20:12 by acazorla          #+#    #+#             */
/*   Updated: 2024/10/22 11:42:26 by acazorla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	a;

	a = ft_strlen(s);
	while (a >= 0)
	{
		if ((char)c == *(s + a))
			return ((char *)(s + a));
		a--;
	}
	return (0);
}

/*int main()
{
	const char	prueba[] = "Alvaro cazorla Gomez";
	int			caracter = 'o';
	char		*num;

	printf ("hilo:\n");
	printf ("	%s\n", prueba);
	printf ("caracter a buscar:\n");
	printf ("	%c\n", caracter);
	printf ("posicion del caracter:\n");
	num = ft_strrchr(prueba, caracter);
	printf ("	%p\n", (void *)num);
}*/
