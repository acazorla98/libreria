/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazorla <acazorla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:14:07 by acazorla          #+#    #+#             */
/*   Updated: 2024/10/25 11:08:10 by acazorla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	res_espace(char **baul, int p, size_t b)
{
	int	i;

	i = 0;
	baul[p] = malloc(b);
	if (baul[p] == 0)
	{
		while (i < p)
			free(baul[i++]);
		free(baul);
		return (1);
	}
	return (0);
}

int	fill(char **baul, char const *s, char delim)
{
	size_t	n;
	int		i;

	i = 0;
	while (*s)
	{
		n = 0;
		while (*s == delim && *s)
			s++;
		while (*s != delim && *s)
		{
			n++;
			s++;
		}
		if (n)
		{
			if (res_espace(baul, i, n + 1))
				return (1);
			ft_strlcpy(baul[i], s - n, n + 1);
			i++;
		}
	}
	return (0);
}

size_t	count_words(char const *s, char delim)
{
	size_t	n_words;
	int		boodelim;

	n_words = 0;
	while (*s)
	{
		boodelim = 0;
		while (*s == delim && *s)
			s++;
		while (*s != delim && *s)
		{
			if (!boodelim)
			{
				n_words++;
				boodelim = 1;
			}
			s++;
		}
	}
	return (n_words);
}

char	**ft_split(char const *s, char c)
{
	size_t	num_words;
	char	**baul;

	if (s == 0)
		return (0);
	num_words = 0;
	num_words = count_words(s, c);
	baul = (char **)malloc((num_words + 1) * sizeof(char *));
	if (baul == 0)
		return (0);
	baul[num_words] = 0;
	if (fill(baul, s, c))
		return (0);
	return (baul);
}
