/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazorla <acazorla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:01:34 by acazorla          #+#    #+#             */
/*   Updated: 2024/10/17 13:43:19 by acazorla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	end;
	char	*s2;

	s2 = 0;
	if (s1 != 0 && set != 0)
	{
		i = 0;
		end = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[end -1] && ft_strchr(set, s1[end -1]) && end > i)
			end--;
		s2 = (char *)malloc(sizeof(char) * (end - i +1));
		if (s2)
			ft_strlcpy(s2, &s1[i], end - i + 1);
	}
	return (s2);
}

/*int main()
{
	char const	hilo[] = "-------hola---";
	char const	muestra[] = "-";
	char		resultado[];

	printf ("hilo original:\n	%s\n", hilo);
	printf ("recortar %s del hilo\n", muestra);
	resultado = ft_strtrim(hilo, muestra);
	printf ("hilo tras el recorte:\n	%s\n", resultado);
	return (0);
}*/
