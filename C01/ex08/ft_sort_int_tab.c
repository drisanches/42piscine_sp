/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 20:28:25 by dde-fati          #+#    #+#             */
/*   Updated: 2023/08/25 16:34:22 by dde-fati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	aux;
	int	*ptr;
	int	troca;

	troca = 1;
	while (troca)
	{
		troca = 0;
		ptr = tab;
		while (ptr < tab + size - 1)
		{
			if (*ptr > *(ptr + 1))
			{	
				aux = *ptr;
				*ptr = *(ptr + 1);
				*(ptr + 1) = aux;
				troca = 1;
			}
			ptr++;
		}	
	}
}
