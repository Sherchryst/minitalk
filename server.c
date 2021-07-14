/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 03:16:24 by sgah              #+#    #+#             */
/*   Updated: 2021/07/14 21:12:10 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include <stdio.h>

void
	recv_bit(int bit)
{
	static int	size;
	static int	byte;

	if (bit == SIGUSR1)
		byte += 1 << (7 - size);
	size++;
	if (size == 8)
	{
		ft_putchar_fd(1, byte);
		if (byte == 0)
			ft_putchar_fd(1, '\n');
		size = 0;
		byte = 0;
	}
}

int
	main(int ac, char const **av)
{
	pid_t	pid;

	(void)av;
	signal(SIGUSR1, recv_bit);
	signal(SIGUSR2, recv_bit);
	if (ac != 1)
		ft_putstr_fd(2, "usage : ./server\n");
	else
	{
		pid = getpid();
		ft_putnbr_fd(1, pid);
		ft_putchar_fd(1, '\n');
		while (123)
		{
			pause();
		}
	}
	return (0);
}
