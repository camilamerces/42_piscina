/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdas-mer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 17:28:39 by cdas-mer          #+#    #+#             */
/*   Updated: 2019/12/03 13:01:14 by cdas-mer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char n)
{
	write(1, &n, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int var;

	if (nb < 0)
	{
		ft_print('-');
		var = nb * (-1);
	}
	else
	{
		var = nb;
	}
	if (var >= 10)
	{
		ft_putnbr(var / 10);
	}
	ft_print(var % 10 + 48);
}
