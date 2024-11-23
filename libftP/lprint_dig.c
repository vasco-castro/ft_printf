/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lprint_dig.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:33:04 by vsoares-          #+#    #+#             */
/*   Updated: 2024/11/23 17:39:55 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libp.h"

int lprint_dig(long n, char *base)
{
	int	base_size;

	base_size = ft_strlen(base);
	if (n < 0)
		return (lprint_chr('-') + lprint_dig(-n, base));
	else if (n < base_size)
		return (lprint_chr(base[n]));
	else
		return lprint_dig(n / base_size, base) + lprint_dig(n % base_size, base);
}

/* int main(void)
{
	// printf("\twrote %d digits.\n", lprint_dig(0, BASE_10));
	// printf("\twrote %d digits.\n", lprint_dig(0, base_16));
	// printf("\twrote %d digits.\n", lprint_dig(0, BASE_16));

	// lprint_chr('\n');

	// printf("\twrote %d digits.\n", lprint_dig(42, BASE_10));
	// printf("\twrote %d digits.\n", lprint_dig(42, base_16));
	// printf("\twrote %d digits.\n", lprint_dig(42, BASE_16));

	// lprint_chr('\n');


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

	lprint_dig(-42, BASE_10);
	lprint_chr('\n');
	lprint_dig((unsigned int)-42, BASE_10);
	lprint_chr('\n');
	lprint_dig((unsigned long)-42, BASE_10);
	lprint_chr('\n');
	lprint_dig(-42, base_16);
	lprint_chr('\n');
	lprint_dig(-42, BASE_16);
	lprint_chr('\n');

	lprint_chr('\n');

	printf("%d\n", -42);
	printf("%u\n", (unsigned int)-42);
	printf("%ld\n", (unsigned long)-42);
	printf("%x\n", -42);
	printf("%X\n", -42);
	return 0;
}
 */