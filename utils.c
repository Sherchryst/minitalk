/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 02:10:44 by sgah              #+#    #+#             */
/*   Updated: 2021/07/14 19:50:17 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

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
