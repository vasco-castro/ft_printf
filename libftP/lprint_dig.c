/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lprint_dig.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:33:04 by vsoares-          #+#    #+#             */
/*   Updated: 2024/11/23 21:56:26 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	lprint_dig(long n, char *base)
{
	int	base_size;

	base_size = ft_strlen(base);
	if (n < 0)
		return (lprint_chr('-') + lprint_dig(-n, base));
	else if (n < base_size)
		return (lprint_chr(base[n]));
	else
		return (lprint_dig(n / base_size, base)
			+ lprint_dig(n % base_size, base));
}
