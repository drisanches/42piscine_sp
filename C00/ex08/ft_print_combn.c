/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fati <driellysanches.s@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 20:53:33 by dde-fati          #+#    #+#             */
/*   Updated: 2023/09/07 14:44:44 by dde-fati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_generate_combn(int n, int prev, int depth, int comb[])
{
	int	i;

	i = 0;
	if (depth == n)
	{
		while (i < n)
		{
			ft_putchar('0' + comb[i]);
			i++;
		}
		if (comb[0] < 10 - n)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		return ;
	}
	i = prev + 1;
	while (i < 10)
	{
		comb[depth] = i;
		ft_generate_combn(n, i, depth + 1, comb);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	comb[9];

	if (n <= 0 || n > 9)
		return ;
	ft_generate_combn(n, -1, 0, comb);
}
