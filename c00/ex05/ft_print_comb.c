/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdas-mer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 18:37:22 by cdas-mer          #+#    #+#             */
/*   Updated: 2019/12/02 16:24:05 by cdas-mer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char n)
{
	write(1, &n, 1);
}

void	ft_number(int c, int d, int u)
{
	ft_print(c);
	ft_print(d);
	ft_print(u);
	if (c < '7')
	{
		ft_print(',');
		ft_print(' ');
	}
}

void	ft_print_comb(void)
{
	char c;
	char d;
	char u;

	c = '0';
	while (c <= '7')
	{
		d = c + 1;
		while (d <= '8')
		{
			u = d + 1;
			while (u <= '9')
			{
				ft_number(c, d, u);
				u++;
			}
			d++;
		}
		c++;
	}
}
