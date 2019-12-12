/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdas-mer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 16:03:53 by cdas-mer          #+#    #+#             */
/*   Updated: 2019/12/06 18:13:10 by cdas-mer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	inside(int *tab, int size)
{
	int j;
	int max;
	int k;
	int aux;

	max = -2147483648;
	j = 0;
	k = 0;
	while (j < size)
	{
		if (tab[j] > max)
		{
			max = tab[j];
			k = j;
		}
		j++;
	}
	aux = tab[size - 1];
	tab[size - 1] = max;
	tab[k] = aux;
}

void	ft_sort_int_tab(int *tab, int size)
{
	while (0 < size)
	{
		inside(tab, size);
		size--;
	}
}
