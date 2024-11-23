/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lprint_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:21:37 by vsoares-          #+#    #+#             */
/*   Updated: 2024/11/23 22:00:48 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	lprint_hex(unsigned long n, char *base)
{
	unsigned long	base_size;

	base_size = ft_strlen(base);
	if (n < base_size)
		return (lprint_chr(base[n]));
	else
		return (lprint_hex(n / base_size, base)
			+ lprint_hex(n % base_size, base));
}
