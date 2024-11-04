/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazorla <acazorla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:18:42 by acazorla          #+#    #+#             */
/*   Updated: 2024/10/25 10:17:11 by acazorla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *str, int c, size_t count)
{
	unsigned char	*copy;
	size_t			n;

	copy = str;
	n = 0;
	while (n < count)
	{
		copy[n] = c;
		n++;
	}
	return (str);
}

/*
int	main()
{
	char	hilo[] = "en este hilo hay cozas";
	int		llena;
	size_t	casillas;

	llena = 'X';
	casillas = 12;
	printf ("%s\n", hilo);
	ft_memset(hilo, llena, casillas);
	printf ("%s\n", hilo);
}
*/