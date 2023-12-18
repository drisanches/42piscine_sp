/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 21:25:55 by dde-fati          #+#    #+#             */
/*   Updated: 2023/09/02 22:47:48 by dde-fati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	str1[] = "";
	char	str2[] = "teste";
	char	str3[] = "TESTE";
	
	ft_str_is_lowercase(str1);
	ft_str_is_lowercase(str2);
	ft_str_is_lowercase(str3);
	return (0);
}*/
