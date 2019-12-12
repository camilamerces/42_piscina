/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdas-mer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 14:24:25 by cdas-mer          #+#    #+#             */
/*   Updated: 2019/12/03 12:33:28 by cdas-mer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char n)
{
	write(1, &n, 1);
}

void	ft_print_comb2(void)
{
	int part1;
	int part2;

	part1 = 0;
	while (part1 <= 98)
	{
		part2 = part1 + 1;
		while (part2 <= 99)
		{
			ft_print((char)(part1 / 10 + '0'));
			ft_print((char)(part1 % 10 + '0'));
			ft_print(' ');
			ft_print((char)(part2 / 10 + '0'));
			ft_print((char)(part2 % 10 + '0'));
			if (part1 != 98)
			{
				ft_print(',');
				ft_print(' ');
			}
			part2++;
		}
		part1++;
	}
}
