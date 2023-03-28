/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:10:27 by hoakoumi          #+#    #+#             */
/*   Updated: 2022/11/20 00:23:10 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	find(const char *f, int i, va_list ap)
{
	if (f[i + 1] == 'c')
		return (ft_putchar (va_arg(ap, int)));
	else if (f[i + 1] == 's')
		return (ft_putstr (va_arg(ap, char *)));
	else if (f[i + 1] == 'd' || f[i + 1] == 'i')
		return (ft_putnbr (va_arg(ap, int)));
	else if (f[i + 1] == 'u')
		return (ft_unsig (va_arg(ap, unsigned int)));
	else if (f[i + 1] == 'x')
		return (ft_hexam (va_arg(ap, unsigned int)));
	else if (f[i + 1] == 'X')
		return (ft_hexa (va_arg(ap, unsigned int)));
	else if (f[i + 1] == 'p')
		return (ft_putstr ("0x") + ft_point (va_arg(ap, unsigned long)));
	else
		return (ft_putchar (f[i + 1]));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		ret;

	i = 0;
	ret = 0;
	va_start (ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			ret += find (format, i, ap);
			i++;
		}
		else
			ret += ft_putchar(format[i]);
		i++;
	}
	va_end (ap);
	return (ret);
}
