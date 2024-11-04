/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazorla <acazorla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 10:15:12 by acazorla          #+#    #+#             */
/*   Updated: 2024/10/17 12:53:01 by acazorla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		l1;
	int		l2;
	char	*s3;

	if (s1 && s2)
	{
		l1 = ft_strlen(s1);
		l2 = ft_strlen(s2);
		s3 = (char *)malloc(sizeof(char) * (l1 + l2 + 1));
		if (s3 == 0)
			return (0);
		i = -1;
		while (s1[++i])
			s3[i] = s1[i];
		i = -1;
		while (s2[++i])
		{
			s3[l1] = s2[i];
			l1++;
		}
		s3[l1] = '\0';
		return (s3);
	}
	return (0);
}
