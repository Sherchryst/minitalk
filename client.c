/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 01:54:54 by sgah              #+#    #+#             */
/*   Updated: 2021/07/14 04:03:30 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void
	send_bit(int pid, char *message, size_t len)
{
	size_t	i;
	int		bit;

	i = 0;
	while(i <=len)
	{
		bit = 0;
		while(bit < 7)
		{
			if((message[i] >> bit) & 1)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			bit++;
			usleep(60);
		}
		i++;
	}
}

int
	main(int ac, char **av)
{
	int	pid;

	if(ac == 3)
	{
		pid = get_pid(av[1]);
		send_bit(pid, av[2], ft_strlen(av[2]));
	}
	else
		ft_putstr_fd(2, "usage : ./client [PID] [MESSAGE]\n");
	return (0);
}
