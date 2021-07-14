/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 01:54:54 by sgah              #+#    #+#             */
/*   Updated: 2021/07/14 21:09:48 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void
	send_bit(int pid, char *msg)
{
	int		bit;
	size_t	j;
	size_t	len;

	j = 0;
	len = ft_strlen(msg);
	while (j <= len)
	{
		bit = 7;
		while (bit >= 0)
		{
			if ((msg[j] >> bit) & 1)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			bit--;
			usleep(60);
		}
		j++;
	}
	ft_putstr_fd(1, "Message sended!\n");
}

int
	main(int ac, char **av)
{
	int	pid;

	if (ac == 3)
	{
		pid = get_pid(av[1]);
		send_bit(pid, av[2]);
	}
	else
		ft_putstr_fd(2, "usage : ./client [PID] [MESSAGE]\n");
	return (0);
}
