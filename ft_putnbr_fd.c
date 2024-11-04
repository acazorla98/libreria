/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazorla <acazorla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 07:41:40 by acazorla          #+#    #+#             */
/*   Updated: 2024/10/22 10:10:07 by acazorla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		if (-2147483648 == n)
		{
			ft_putstr_fd("-2147483648", fd);
			return ;
		}
		n *= -1;
		write(fd, "-", 1);
	}
	if (0 == n)
		write(fd, "0", 1);
	else if (n > 0 && n < 10)
		ft_putchar_fd((n + 48), fd);
	else
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putchar_fd((n % 10) + 48, fd);
	}
}
