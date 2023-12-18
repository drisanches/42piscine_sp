/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 20:55:30 by dde-fati          #+#    #+#             */
/*   Updated: 2023/09/02 22:43:15 by dde-fati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char	str1[] = "";
	char	str2[] = "Letras";
	char	str3[] = "c@racT&re$ &$p&c!@!$422";

	ft_str_is_alpha(str1);
	ft_str_is_alpha(str2);
	ft_str_is_alpha(str3);
	return (0);
}*/
