/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 02:10:44 by sgah              #+#    #+#             */
/*   Updated: 2021/07/14 02:45:56 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int
	get_pid(char *pid)
{
	int	ret;
	int	i;

	i = 0;
	while(pid[i] <= '9' && pid[i] >= '0')
	{
		ret = (ret * 10) + (pid[i] - '0');
		i++;
	}
	if(pid[i])
		return (-1);
	return (ret);
}

size_t
	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

void
	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}
