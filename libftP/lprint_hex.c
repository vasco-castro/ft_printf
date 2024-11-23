/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lprint_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:21:37 by vsoares-          #+#    #+#             */
/*   Updated: 2024/11/23 20:17:40 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libp.h"

int	lprint_hex(long n, char *base)
{
	if (!NEGATIVE_HEX && n < 0)
		n *= -1;
	if (DIG_OVERFLOW)
		return (lprint_dig((unsigned long)n, base));
	else
		return (lprint_dig(n, base));
}
