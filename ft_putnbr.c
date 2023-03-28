/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:34:59 by hoakoumi          #+#    #+#             */
/*   Updated: 2023/03/28 16:03:36 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	lent(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
	len++;
	while (nb)
	{
		len++;
		nb = nb / 10;
	}
	return (len);
}

int	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return (11);
	}
	if (nb < 0)
	{	
		ft_putchar ('-');
		nb = nb * (-1);
		ft_putnbr (nb);
		return (lent(nb) + 1);
	}
	else if (nb > 9)
	{
		ft_putnbr (nb / 10);
		ft_putnbr (nb % 10);
		return (lent(nb));
	}
	else
		ft_putchar (nb + 48);
	return (lent(nb));
}
