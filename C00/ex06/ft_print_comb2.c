/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fati <driellysanches.s@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:37:23 by dde-fati          #+#    #+#             */
/*   Updated: 2023/09/07 14:44:16 by dde-fati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_inner_loop(int num1, int num2, char *output)
{
	while (num2 <= 99)
	{
		output[0] = '0' + (num1 / 10);
		output[1] = '0' + (num1 % 10);
		output[2] = ' ';
		output[3] = '0' + (num2 / 10);
		output[4] = '0' + (num2 % 10);
		if (num1 != 98 || num2 != 99)
		{
			output[5] = ',';
			write(1, output, 6);
			write(1, " ", 1);
		}
		else
		{
			write(1, output, 5);
		}
		num2++;
	}
}

void	ft_print_comb2(void)
{
	int		num1;
	int		num2;
	char	output[6];

	num1 = 0;
	while (num1 < 99)
	{
		num2 = num1 + 1;
		ft_inner_loop(num1, num2, output);
		num1++;
	}
}
