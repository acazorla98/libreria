/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazorla <acazorla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:25:34 by acazorla          #+#    #+#             */
/*   Updated: 2024/09/25 08:07:51 by acazorla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*p;
	int		size;

	size = ft_strlen(s);
	p = malloc(sizeof(char) * (size + 1));
	if (p == 0)
		return (0);
	ft_memcpy(p, s, size);
	p[size] = '\0';
	return (p);
}
