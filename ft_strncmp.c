/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazorla <acazorla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:30:06 by acazorla          #+#    #+#             */
/*   Updated: 2024/10/22 08:41:35 by acazorla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!n)
		return (0);
	while (*s1 == *s2 && --n && *s1)
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

/*int main()
{
	const char	hilo1[] = "hola compadre";
	const char	hilo2[] = "hola caracola";
	size_t		num;
	int			resul;

	num = 4;
	printf ("dos hilos a comparar:\n");
	printf ("	%s\n", hilo1);
	printf ("	%s\n", hilo2);
	printf ("compara hasta el espacio numero ");
	printf ("%d\n", num);
	printf ("los fragmentos comparados son ");
	resul = ft_strncmp(hilo1, hilo2, num);
	if (resul == 0)
		printf ("iguales\n");
	else
		printf ("diferentes\n");
	num = 8;
	printf ("compara hasta el espacio numero ");
	printf ("%d\n", num);
	printf ("los fragmentos comparados son ");
	resul = ft_strncmp(hilo1, hilo2, num);
	if (resul == 0)
		printf ("iguales\n");
	else
		printf ("diferentes\n");
}*/
