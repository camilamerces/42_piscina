/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdas-mer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 18:46:27 by cdas-mer          #+#    #+#             */
/*   Updated: 2019/12/09 10:27:10 by cdas-mer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
