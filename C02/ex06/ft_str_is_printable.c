/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 21:43:17 by dde-fati          #+#    #+#             */
/*   Updated: 2023/09/02 22:49:00 by dde-fati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	str1[] = "";
	char	str2[] = "\n";
	char	str3[] = "TeStE42";
	
	ft_str_is_printable(str1);
	ft_str_is_printable(str2);
	ft_str_is_printable(str3);
	return (0);
}*/
