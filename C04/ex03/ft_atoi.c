/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:39:48 by dde-fati          #+#    #+#             */
/*   Updated: 2023/09/06 15:42:07 by dde-fati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_base_10(int exponent)
{
	int	counter;

	counter = 1;
	while (exponent > 0)
	{
		counter *= 10;
		exponent--;
	}
	return (counter);
}

char	*ft_skip_whitespaces(char *str)
{
	while (*str == ' ' || *str == '\f' || *str == '\n'
		|| *str == '\r' || *str == '\t' || *str == '\v')
		str++;
	return (str);
}

char	*ft_handle_sign(char *str, int *is_neg)
{
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			*is_neg = !(*is_neg);
		str++;
	}
	return (str);
}

int	ft_calculate_digit(char *str)
{
	int	i;
	int	j;
	int	digit;

	i = 0;
	j = 0;
	digit = 0;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	while (str[j] >= '0' && str[j] <= '9')
		digit += ft_base_10(--i) * (str[j++] - '0');
	return (digit);
}

int	ft_atoi(char *str)
{
	int	is_neg;
	int	digit;

	is_neg = 0;
	str = ft_skip_whitespaces(str);
	str = ft_handle_sign(str, &is_neg);
	digit = ft_calculate_digit(str);
	if (is_neg)
		digit = -digit;
	return (digit);
}
