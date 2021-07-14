/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 02:19:26 by sgah              #+#    #+#             */
/*   Updated: 2021/07/14 20:55:18 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <stdlib.h>
# include <unistd.h>

char	*ft_itoa(int n);
int		get_pid(char *pid);
size_t	ft_strlen(char *str);
void	send_bit(int pid, char *msg);
void	ft_putchar_fd(int fd, char c);
void	ft_putnbr_fd(int fd, int nbr);
void	ft_putstr_fd(int fd, char *str);

#endif
