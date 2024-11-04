/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazorla <acazorla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:38:12 by acazorla          #+#    #+#             */
/*   Updated: 2024/10/22 11:56:11 by acazorla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int	num;

	i = 0;
	neg = 1;
	num = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * neg);
}

/*int	main()
{
	char	hilo[] = "  +--++-45b442";
	char	hilo2[] = "  +----++8763h73";
	int		resultado;

	printf ("%s\n", hilo);
	resultado = ft_atoi(hilo);
	printf ("%d\n", resultado);
	printf ("%s\n", hilo2);
	resultado = ft_atoi(hilo2);
	printf ("%d\n", resultado);
	return (0);
}*/
