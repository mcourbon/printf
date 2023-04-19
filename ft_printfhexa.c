/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfhexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourbon <mcourbon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:26:19 by shifterpro        #+#    #+#             */
/*   Updated: 2023/03/07 11:07:46 by mcourbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexalengh(unsigned int nbr)
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

int	ft_printfhexa(unsigned int nbr, const char c)
{
	if (nbr == 0)
		return (write(1, "0", 1));
	if (nbr >= 16)
	{
		ft_printfhexa(nbr / 16, c);
		ft_printfhexa(nbr % 16, c);
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
			if (c == 'x')
				if (ft_putchar(nbr - 10 + 'a') < 0)
					return (-1000);
			if (c == 'X')
				if (ft_putchar(nbr - 10 + 'A') < 0)
					return (-1000);
		}
	}
	return (ft_hexalengh(nbr));
}
