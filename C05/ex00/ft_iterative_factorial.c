/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 22:29:22 by dde-fati          #+#    #+#             */
/*   Updated: 2023/09/07 19:02:07 by dde-fati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;
	int	i;

	i = 0;
	factorial = 1;
	if (nb >= 2147483647 || nb < 0)
		return (0);
	while (i < nb - 1)
	{
		factorial *= (nb - i);
		i++;
	}
	return (factorial);
}
