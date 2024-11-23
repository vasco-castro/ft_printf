/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lprint_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:19:57 by vsoares-          #+#    #+#             */
/*   Updated: 2024/11/23 20:27:46 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	lprint_str(char *str)
{
	int	count;

	count = 0;
	if (!str)
		return (lprint_str("(null)"));
	while (*str)
		count += write(1, str++, 1);
	return (count);
}
