/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 07:37:09 by dde-fati          #+#    #+#             */
/*   Updated: 2023/09/03 10:44:53 by dde-fati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *src, char *to_find)
{
	int	i;

	i = 0;
	if (*to_find == '\0')
		return (src);
	while (*src != '\0')
	{
		if (*src == *to_find)
		{
			while (to_find[i] != '\0' && src[i] == to_find[i])
				i++;
			if (to_find[i] == '\0')
				return (src);
		}
		src++;
	}
	return (0);
}

/*int	main(void)
{
	char	str[] = "Quando vierem fechar meus olhos, talvez não se deixem fechar";
	char	search[] = "olhos";

	printf("%s", ft_strstr(str, search));
	return (0);	
}*/
