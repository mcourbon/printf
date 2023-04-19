/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourbon <mcourbon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:04:41 by shifterpro        #+#    #+#             */
/*   Updated: 2023/03/07 10:55:30 by mcourbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*space;

	if (nmemb && SIZE_MAX / nmemb < size)
		return (0);
	space = (void *)malloc(size * nmemb);
	if (!space)
		return (0);
	ft_bzero(space, size * nmemb);
	return (space);
}
