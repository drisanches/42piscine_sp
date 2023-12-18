/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 08:19:30 by dde-fati          #+#    #+#             */
/*   Updated: 2023/09/03 11:13:51 by dde-fati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_size;
	unsigned int	src_size;

	i = ft_strlen(dest);
	j = 0;
	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	if (size < 1)
		return (src_size + size);
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < dest_size)
		return (src_size + size);
	else
		return (dest_size + src_size);
}

/*int	main(void)
{
	char	str1[] = "computador";
	char	str2[] = "notebook";

	printf("%i\n", ft_strlcat(str2, str1, 19));
	printf("%s", str2);
	return (0);
}*/
