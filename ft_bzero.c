/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazorla <acazorla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 20:35:39 by acazorla          #+#    #+#             */
/*   Updated: 2024/10/21 17:08:29 by acazorla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n-- > 0)
		*((unsigned char *)s + n) = 0;
}

/*int	main()
{
	char	hilo[] = "hay que probar el codigo";
	size_t	casillas;

	casillas = 14;
	printf ("%s\n", hilo);
	ft_bzero(hilo, casillas);
	printf ("%s\n", hilo);
}*/