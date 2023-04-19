/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourbon <mcourbon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:40:06 by shifterpro        #+#    #+#             */
/*   Updated: 2023/03/07 11:22:04 by mcourbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexalenghptr(unsigned long nbr)
{
	int	i;

	i = 0;
	while (nbr)
	{
		i++;
		nbr = nbr / 16;
	}
	return (i);
}

int	ft_printfhexaptr(unsigned long nbr)
{
	if (nbr >= 16)
	{
		ft_printfhexaptr(nbr / 16);
		ft_printfhexaptr(nbr % 16);
	}
	else
	{
		if (nbr <= 9)
		{
			if (ft_putchar(nbr + '0') < 0)
				return (-1000);
		}
		else
		{
			if (ft_putchar(nbr - 10 + 'a') < 0)
				return (-1000);
		}
	}
	return (0);
}

int	ft_printfptr(unsigned long long ptr)
{
	int	len;
	int	x;

	len = 0;
	x = 0;
	if (x < 0)
		return (-1);
	if (ptr == 0)
		len = len + ft_printfstr("(nil)");
	else
	{
		x = ft_printfstr("0x");
		len = len + x;
		if (ft_printfhexaptr(ptr) < 0)
			return (-1);
		len = len + ft_hexalenghptr(ptr);
	}
	return (len);
}
