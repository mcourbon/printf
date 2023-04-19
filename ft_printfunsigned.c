/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfunsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourbon <mcourbon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:30:16 by shifterpro        #+#    #+#             */
/*   Updated: 2022/11/25 15:32:35 by mcourbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nbrl(unsigned int nbr)
{
	int	i;

	i = 0;
	while (nbr)
	{
		i++;
		nbr = nbr / 10;
	}
	return (i);
}

char	*ft_atou(unsigned int nbr)
{
	char	*n;
	int		len;

	len = ft_nbrl(nbr);
	n = (char *)malloc(sizeof(char) * (len + 1));
	if (!n)
		return (0);
	n[len] = '\0';
	while (nbr)
	{
		n[len - 1] = nbr % 10 + 48;
		nbr = nbr / 10;
		len--;
	}
	return (n);
}

int	ft_printfunsigned(unsigned int nbr)
{
	char	*n;
	int		category;

	category = 0;
	if (nbr == 0)
		category += write(1, "0", 1);
	else
	{
		n = ft_atou(nbr);
		if (!n)
			return (-1);
		category += ft_printfstr(n);
		free(n);
	}
	return (category);
}
