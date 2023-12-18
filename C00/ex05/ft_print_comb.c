/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fati <driellysanches.s@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 18:24:30 by dde-fati          #+#    #+#             */
/*   Updated: 2023/09/07 14:43:43 by dde-fati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_inner_loop(int num1, int num2, int num3, char *output)
{
	while (num3 < 10)
	{
		output[0] = '0' + num1;
		output[1] = '0' + num2;
		output[2] = '0' + num3;
		output[3] = ',';
		output[4] = ' ';
		if (num1 == 7 && num2 == 8 && num3 == 9)
			write(1, output, 3);
		else
			write(1, output, 5);
		num3++;
	}
}

void	ft_print_comb(void)
{
	int		num1;
	int		num2;
	int		num3;
	char	output[5];

	num1 = 0;
	while (num1 < 8)
	{
		num2 = num1 + 1;
		while (num2 < 9)
		{
			num3 = num2 + 1;
			ft_inner_loop(num1, num2, num3, output);
			num2++;
		}
		num1++;
	}
}
