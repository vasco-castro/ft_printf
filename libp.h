/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libp.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:22:53 by vsoares-          #+#    #+#             */
/*   Updated: 2024/11/23 16:57:21 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

// # include "libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

# ifndef BASE_10
#  define BASE_10 "0123456789"
# endif

# ifndef base_16
#  define base_16 "0123456789abcdef"
# endif

# ifndef BASE_16
#  define BASE_16 "0123456789ABCDEF"
# endif

int ft_strlen(char *str);

int	lprint_chr(int c);
int	lprint_str(char *str);
int	lprint_ptr(void *ptr);
int lprint_dig(long n, char *base);

int	ft_printf(const char *, ...);

#endif