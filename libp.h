/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libp.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:22:53 by vsoares-          #+#    #+#             */
/*   Updated: 2024/11/23 20:04:00 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBP_H
# define LIBP_H

// # include "libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

# define BASE_10 "0123456789"
# define L_BASE_16 "0123456789abcdef"
# define U_BASE_16 "0123456789ABCDEF"

# define NEGATIVE_HEX 0
# define DIG_OVERFLOW 1

int	ft_strlen(char *str);

int	lprint_chr(int c);
int	lprint_str(char *str);
int	lprint_ptr(void *ptr);
int	lprint_dig(long n, char *base);
int	lprint_hex(long n, char *base);

int	ft_printf(const char *str, ...);

#endif