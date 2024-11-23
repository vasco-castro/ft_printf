/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 20:34:36 by vsoares-          #+#    #+#             */
/*   Updated: 2024/11/23 17:44:45 by vsoares-         ###   ########.fr       */
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
		counter = lprint_dig((long)va_arg(ap, int), base_16);
	else if (format == 'X')
		counter = lprint_dig((long)va_arg(ap, int), BASE_16);
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

int main(void)
{
	// printf("\twrote %d digits.\n", lprint_dig(0, BASE_10));
	// printf("\twrote %d digits.\n", lprint_dig(0, base_16));
	// printf("\twrote %d digits.\n", lprint_dig(0, BASE_16));

	// lprint_chr('\n');

	ft_printf("\twrote %d digits.\n", ft_printf("%d", 42));
	ft_printf("\twrote %d digits.\n", ft_printf("%x", 42));
	ft_printf("\twrote %d digits.\n", ft_printf("%X", 42));

	lprint_chr('\n');

	printf("\twrote %d digits.\n", printf("%d", 42));
	printf("\twrote %d digits.\n", printf("%x", 42));
	printf("\twrote %d digits.\n", printf("%X", 42));

	// printf("\twrote %d digits.\n", lprint_dig(INT_MAX, BASE_10));
	// printf("\twrote %d digits.\n", lprint_dig(INT_MAX, base_16));
	// printf("\twrote %d digits.\n", lprint_dig(INT_MAX, BASE_16));

	// lprint_chr('\n');

	// printf("\twrote %d digits.\n", lprint_dig(INT_MIN, BASE_10));
	// printf("\twrote %d digits.\n", lprint_dig(INT_MIN, base_16));
	// printf("\twrote %d digits.\n", lprint_dig(INT_MIN, BASE_16));

	// lprint_chr('\n');

	// printf("%x, %X\n", INT_MIN, INT_MIN);
	// printf("%x, %X\n", INT_MAX, INT_MAX);

	// lprint_chr('\n');

	// lprint_dig(-42, BASE_10);
	// lprint_chr('\n');
	// lprint_dig((unsigned int)-42, BASE_10);
	// lprint_chr('\n');
	// lprint_dig((unsigned long)-42, BASE_10);
	// lprint_chr('\n');
	// lprint_dig(-42, base_16);
	// lprint_chr('\n');
	// lprint_dig(-42, BASE_16);
	// lprint_chr('\n');

	// lprint_chr('\n');

	// printf("%d\n", -42);
	// printf("%u\n", (unsigned int)-42);
	// printf("%ld\n", (unsigned long)-42);
	// printf("%x\n", -42);
	// printf("%X\n", -42);
	return 0;
}
