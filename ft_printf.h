/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nesdebie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 11:46:04 by nesdebie          #+#    #+#             */
/*   Updated: 2023/04/18 13:33:51 by nesdebie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);

void	ft_putchar_fd(int c, int fd);

int		print_c(int c);
int		print_s(char *str);
int		ft_check_sign_nbr(int i);
int		print_nbr(unsigned int nb);
int		check_hex_ptr(unsigned long nb, char c);

#endif
