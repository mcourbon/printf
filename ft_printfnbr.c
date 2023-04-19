/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourbon <mcourbon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:05:12 by shifterpro        #+#    #+#             */
/*   Updated: 2022/11/25 15:18:56 by mcourbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printfnbr(int nbr)
{
	int		i;
	char	*j;

	i = 0;
	j = ft_itoa(nbr);
	if (!j)
		return (-1);
	i = ft_printfstr(j);
	free(j);
	return (i);
}
