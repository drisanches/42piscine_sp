/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:24:11 by dde-fati          #+#    #+#             */
/*   Updated: 2023/09/07 19:16:15 by dde-fati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (nb >= 2147483647 || nb < -2147483648 || power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (ft_recursive_power(nb, power - 1) * nb);
}
