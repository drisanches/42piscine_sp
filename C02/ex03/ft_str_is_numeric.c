/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 21:11:22 by dde-fati          #+#    #+#             */
/*   Updated: 2023/09/02 22:45:46 by dde-fati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	str1[] = "";
	char	str2[] = "8574964";
	char	str3[] = "teste22";
	
	ft_str_is_numeric(str1);
	ft_str_is_numeric(str2);
	ft_str_is_numeric(str3);
	return (0);
}*/
