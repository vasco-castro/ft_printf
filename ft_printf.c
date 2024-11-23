/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 20:34:36 by vsoares-          #+#    #+#             */
/*   Updated: 2024/11/23 18:25:45 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libp.h"

static int printer(char format, va_list ap)
{
	int	counter;

	if (format == 'c')
		counter = lprint_chr(va_arg(ap, int));
	else if (format == 's')
		counter = lprint_str(va_arg(ap, char *));
	else if (format == 'p')
		counter = lprint_ptr(va_arg(ap, void *));
	else if (format == 'd' || format == 'i')
		counter = lprint_dig((long)va_arg(ap, int), BASE_10);
	else if (format == 'u')
		counter = lprint_dig((long)va_arg(ap, int), BASE_10);
	else if (format == 'x')
		counter = lprint_hex((long)va_arg(ap, int), base_16);
	else if (format == 'X')
		counter = lprint_hex((long)va_arg(ap, int), BASE_16);
	else if (format == '%')
		counter = lprint_chr(format);
	else
		return (-1);
	return counter;
}

int ft_printf(const char *str, ...)
{
	va_list	ap;
	int	counter;
	int i;

	i = 0;
	counter = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
			counter += printer(str[++i], ap);
		else
			counter += lprint_chr(str[i]);
		i++;
	}
	va_end(ap);
	return (counter);
}
