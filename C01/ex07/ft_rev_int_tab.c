/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 17:39:26 by dde-fati          #+#    #+#             */
/*   Updated: 2023/08/25 16:29:38 by dde-fati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	aux;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		aux = tab[start];
		tab[start] = tab[end];
		tab[end] = aux;
		start++;
		end--;
	}	
}
