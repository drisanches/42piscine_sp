/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 20:13:56 by dde-fati          #+#    #+#             */
/*   Updated: 2023/09/02 22:31:38 by dde-fati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_length;

	src_length = 0;
	i = 0;
	while (src[src_length])
		src_length++;
	if (size == 0)
		return (src_length);
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_length);
}

/*int	main(void)
{
	char	str1[] = "teste";
	char	dest1[50];
	unsigned int	len;

	len = ft_strlcpy(dest1, str1, sizeof(dest1));
	printf("dest1: %s\n", dest1);
	printf("tamanho de src: %i\n", len);
	return (0);
}*/
