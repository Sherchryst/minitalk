/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 03:16:24 by sgah              #+#    #+#             */
/*   Updated: 2021/07/14 04:36:33 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void
	ft_putnbr_fd(int fd, int nbr)
{
	unsigned int	n;

	if(nbr < 0)
	{
		ft_putchar_fd(fd, '-');
		n = nbr * -1;
	}
	else
		n = nbr;
	if (n >= 10)
	{
		ft_putnbr_fd(fd, n / 10);
		ft_putchar_fd(fd, n % 10 + '0');
	}
	else
		ft_putchar_fd(fd, n + '0');
}

void
	recv_bit(int bit)
{
	static size_t	size = 0;
	static int		byte;

	byte += ((bit & 1) << size);
	if (size == 7)
	{
		ft_putchar_fd(1, byte);
		size = 0;
		byte = 0;
	}
}

int
	main(int ac, char const **av)
{
	pid_t	pid;

	(void)av;
	if(ac != 1)
		ft_putstr_fd(2, "usage : ./server\n");
	else
	{
		pid = getpid();
		ft_putnbr_fd(1, pid);
		ft_putchar_fd(1, '\n');
		while(123)
		{
			signal(SIGUSR1, recv_bit);
			signal(SIGUSR2, recv_bit);
		}
	}
	return (0);
}

