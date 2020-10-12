/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 13:07:38 by jpeng             #+#    #+#             */
/*   Updated: 2020/10/06 12:04:05 by jpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	cnt;

	cnt = 0;
	if (!s)
		return ;
	while (s[cnt])
	{
		ft_putchar_fd(s[cnt], fd);
		cnt++;
	}
}