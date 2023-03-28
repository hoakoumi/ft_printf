/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexam.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:21:27 by hoakoumi          #+#    #+#             */
/*   Updated: 2022/11/18 17:55:54 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	lent(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb == 0)
	len++;
	while (nb)
	{
		len++;
		nb = nb / 16;
	}
	return (len);
}

int	ft_hexam(unsigned int n)
{
	char		*b;

	b = "0123456789abcdef";
	if (n >= 16)
		ft_hexam(n / 16);
	ft_putchar(b[n % 16]);
	return (lent(n));
}
