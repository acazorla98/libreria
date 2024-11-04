/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazorla <acazorla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:14:40 by acazorla          #+#    #+#             */
/*   Updated: 2024/10/22 10:11:26 by acazorla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		while (*s)
			write (fd, s++, 1);
		write (fd, "\n", 1);
	}
}
