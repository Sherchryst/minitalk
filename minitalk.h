/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 02:19:26 by sgah              #+#    #+#             */
/*   Updated: 2021/07/14 04:06:10 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <stdlib.h>
# include <unistd.h>

# define BUFF_SIZE 64

int		get_pid(char *pid);
size_t	ft_strlen(char *str);
void	ft_putstr_fd(int fd, char *str);
void	ft_putchar_fd(int fd, char c);
void	*ft_memset(void *buf, int c, size_t len);


#endif
