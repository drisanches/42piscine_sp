/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 21:15:27 by dde-fati          #+#    #+#             */
/*   Updated: 2023/09/02 21:16:49 by dde-fati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char	str1[] = "";
	char	str2[] = "teste";
	char	str3[] = "TESTE";

	ft_str_is_uppercase(str1);
	ft_str_is_uppercase(str2);
	ft_str_is_uppercase(str3);
	return (0);
}*/
