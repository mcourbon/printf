/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourbon <mcourbon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:09:12 by shifterpro        #+#    #+#             */
/*   Updated: 2023/03/07 11:27:14 by mcourbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>

int			ft_printf(const char *s, ...);
int			ft_letter(va_list ap, char c);
int			ft_printfchar(int c);
int			ft_printfstr(char *s);
int			ft_printfpercent(void);
int			ft_printfhexa(unsigned int nbr, const char c);
int			ft_hexalengh(unsigned int nbr);
int			ft_printfnbr(int nbr);
int			ft_printfunsigned(unsigned int nbr);
char		*ft_atou(unsigned int nbr);
int			ft_nbrl(unsigned int nbr);
int			ft_printfptr(unsigned long long ptr);
int			ft_printfhexaptr(unsigned long nbr);
char		*ft_itoa(int n);
int			ft_putchar(char c);
size_t		ft_strlen(const char *s);
void		*ft_calloc(size_t nmemb, size_t size);
void		ft_bzero(void *str, size_t n);
int			ft_hexalenghptr(unsigned long nbr);

#endif