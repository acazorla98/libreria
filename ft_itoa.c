/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazorla <acazorla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:05:25 by acazorla          #+#    #+#             */
/*   Updated: 2024/10/25 10:14:04 by acazorla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count(int numero)
{
	int	con;

	con = 0;
	if (numero != 0)
	{
		if (numero < 0)
		{
			numero = numero *(-1);
			con++;
		}
		while (numero != 0)
		{
			numero = numero / 10;
			con++;
		}
	}
	else
		con = 1;
	return (con);
}

char	*ft_itoa(int n)
{
	int			lon;
	char		*s;
	long int	num;

	lon = count(n);
	num = n;
	s = malloc(sizeof(char) * (lon + 1));
	if (!s)
		return (0);
	if (num < 0)
	{
		s[0] = '-';
		num = -num;
	}
	if (num == 0)
		s[0] = '0';
	s[lon--] = '\0';
	while (num)
	{
		s[lon] = ((num % 10) + '0');
		num /= 10;
		lon--;
	}
	return (s);
}
