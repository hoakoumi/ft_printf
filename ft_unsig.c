/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsig.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:09:09 by hoakoumi          #+#    #+#             */
/*   Updated: 2022/11/18 01:47:37 by hoakoumi         ###   ########.fr       */
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
		nb = nb / 10;
	}
	return (len);
}

int	ft_unsig(unsigned int nb)
{
	if (nb > 9)
	{
		ft_unsig (nb / 10);
		ft_unsig (nb % 10);
		return (lent(nb));
	}
	else
		ft_putchar (nb + 48);
	return (lent(nb));
}
