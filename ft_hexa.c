/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:24:10 by hoakoumi          #+#    #+#             */
/*   Updated: 2022/11/18 17:53:39 by hoakoumi         ###   ########.fr       */
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

int	ft_hexa(unsigned int n)
{
	char	*b;

	b = "0123456789ABCDEF";
	if (n >= 16)
		ft_hexa (n / 16);
	ft_putchar (b[n % 16]);
	return (lent(n));
}
