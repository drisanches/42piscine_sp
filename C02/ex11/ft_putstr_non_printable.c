/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 01:33:56 by dde-fati          #+#    #+#             */
/*   Updated: 2023/09/02 22:36:37 by dde-fati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_convert_dec_hex(char c)
{
	char	hex_chars[16];
	char	hex[2];

	hex_chars[0] = '0';
	hex_chars[1] = '1';
	hex_chars[2] = '2';
	hex_chars[3] = '3';
	hex_chars[4] = '4';
	hex_chars[5] = '5';
	hex_chars[6] = '6';
	hex_chars[7] = '7';
	hex_chars[8] = '8';
	hex_chars[9] = '9';
	hex_chars[10] = 'a';
	hex_chars[11] = 'b';
	hex_chars[12] = 'c';
	hex_chars[13] = 'd';
	hex_chars[14] = 'e';
	hex_chars[15] = 'f';
	hex[0] = hex_chars[c / 16];
	hex[1] = hex_chars[c % 16];
	write(1, "\\", 1);
	write(1, hex, 2);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 126)
			write(1, str, 1);
		else
			ft_convert_dec_hex(*str);
		str++;
	}
}

/*int	main(void)
{
	char	text1[50] = "Oi\nvoce esta bem?";
	char    text2[50] = "Teste\t caracter";
	char    text3[50] = "Teste\f caracter";
       
	ft_putstr_non_printable(text1);
	write(1, "\n", 1);
	ft_putstr_non_printable(text2);
	write(1, "\n", 1);
	ft_putstr_non_printable(text3);
	return (0);
}*/
