/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahidalg <rahidalg@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 12:17:57 by rahidalg          #+#    #+#             */
/*   Updated: 2024/05/07 13:18:59 by rahidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

//PRINTF
int		ft_printf(char const *s, ...);
int		ft_putchar_pf(int n, int fd);
int		ft_putstr_pf(char *s, int fd);
int		ft_putnbr_pf(int n, int fd);
int		ft_putunbr_pf(unsigned int n, int fd);
int		ft_puthex_pf(unsigned int n, size_t type, int fd);
int		ft_putvoid_pf(unsigned long n, size_t type, int fd);
//UTILS
char	**ft_freear(char **ptr);
int		ft_vargscount(char const *s);
int		ft_checkformat(char c);
#endif //PRINTF_H
