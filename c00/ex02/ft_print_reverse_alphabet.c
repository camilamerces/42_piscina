/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdas-mer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 13:56:12 by cdas-mer          #+#    #+#             */
/*   Updated: 2019/11/27 14:35:53 by cdas-mer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char betalpha;

	betalpha = 'z';
	while (betalpha >= 'a')
	{
		write(1, &betalpha, 1);
		betalpha--;
	}
}
