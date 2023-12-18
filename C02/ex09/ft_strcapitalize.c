/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 21:23:18 by dde-fati          #+#    #+#             */
/*   Updated: 2023/09/06 01:28:31 by dde-fati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (j == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			j++;
		}
		else if (j > 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		else if (str[i] < '0' || (str[i] > '9' && str[i] < 'A')
			|| (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
			j = 0;
		else
			j++;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str1[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	ft_strcapitalize(str1);
	printf("%s", str1);
	return (0);
}
