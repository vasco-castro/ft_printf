/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lprint_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:26:38 by vsoares-          #+#    #+#             */
/*   Updated: 2024/11/23 21:59:24 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	lprint_ptr(void *ptr)
{
	int				counter;
	unsigned long	ptr_value;

	if (!ptr)
		return (lprint_str("(nil)"));
	ptr_value = (unsigned long)ptr;
	counter = lprint_str("0x");
	counter += lprint_hex(ptr_value, HEXA_LOW);
	return (counter);
}
