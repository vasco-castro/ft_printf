/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lprint_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:19:57 by vsoares-          #+#    #+#             */
/*   Updated: 2024/11/23 16:55:04 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libp.h"

int	lprint_str(char *str)
{
	int	count;

	count = 0;
	if (!str)
		return 0;
	while (*str)
		count += write(1, str++, 1);
	return count;
}
