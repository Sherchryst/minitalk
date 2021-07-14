/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 02:10:44 by sgah              #+#    #+#             */
/*   Updated: 2021/07/14 21:02:56 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void
	ft_putnbr_fd(int fd, int nbr)
{
	unsigned int	n;

	if (nbr < 0)
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
	ft_putchar_fd(int fd, char c)
{
	write(fd, &c, 1);
}

void
	ft_putstr_fd(int fd, char *str)
{
	write(fd, str, ft_strlen(str));
}

int
	get_pid(char *pid)
{
	int	ret;
	int	i;

	i = 0;
	ret = 0;
	while (pid[i] <= '9' && pid[i] >= '0')
	{
		ret = (ret * 10) + (pid[i] - '0');
		i++;
	}
	if (pid[i])
		return (0);
	return (ret);
}

size_t
	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
