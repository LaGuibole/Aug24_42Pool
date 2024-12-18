/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 09:57:32 by guphilip          #+#    #+#             */
/*   Updated: 2024/08/19 15:18:04 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str1[] = "helloworld";
//     char	str2[] = "HELLOWORLD";
//     char    str3[] = "123abcABC";

//     printf("%s\n", ft_strupcase(str1));
//     printf("%s\n", ft_strupcase(str2));
//     printf("%s\n", ft_strupcase(str3));
//     return (0);
// }
