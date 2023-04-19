/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourbon <mcourbon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:20:41 by shifterpro        #+#    #+#             */
/*   Updated: 2022/11/25 15:18:28 by mcourbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_abs(int nbr)
{
	if (nbr < 0)
		return (nbr * -1);
	else
		return (nbr);
}

static void	ft_strrev(char *str)
{
	size_t	length;
	size_t	i;
	char	tmp;

	length = ft_strlen(str);
	i = 0;
	while (i < length / 2)
	{
		tmp = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = tmp;
		i++;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		is_neg;
	size_t	len;

	is_neg = 0;
	if (n < 0)
		is_neg = 1;
	str = ft_calloc(11 + is_neg, sizeof(*str));
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	len = 0;
	while (n != 0)
	{
		str[len] = '0' + ft_abs(n % 10);
		n = (n / 10);
		len++;
	}
	if (is_neg)
		str[len] = '-';
	ft_strrev(str);
	return (str);
}
