/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourbon <mcourbon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:58:55 by shifterpro        #+#    #+#             */
/*   Updated: 2022/11/25 15:30:09 by mcourbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_letter(va_list ap, char c)
{
	int	category;

	category = 0;
	if (c == 'c')
		category += ft_printfchar(va_arg(ap, int));
	else if (c == 's')
		category += ft_printfstr(va_arg(ap, char *));
	else if (c == 'p')
		category += ft_printfptr(va_arg(ap, unsigned long long));
	else if (c == 'd' || c == 'i')
		category += ft_printfnbr(va_arg(ap, int));
	else if (c == 'u')
		category += ft_printfunsigned(va_arg(ap, unsigned int));
	else if (c == 'x' || c == 'X')
		category += ft_printfhexa(va_arg(ap, unsigned int), c);
	else if (c == '%')
		category += ft_printfpercent();
	return (category);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		category;
	int		tot;
	va_list	ap;

	i = 0;
	category = 0;
	tot = 0;
	if (write(1, 0, 0) == -1)
		return (-1);
	va_start(ap, s);
	while (s[i])
	{
		if (s[i] == '%')
			category = ft_letter(ap, s[i++ + 1]);
		else
			category = ft_printfchar(s[i]);
		if (category == -1)
			return (-1);
		tot += category;
		i++;
	}
	va_end(ap);
	return (tot);
}
