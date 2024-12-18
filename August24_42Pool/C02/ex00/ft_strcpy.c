/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 09:26:34 by guphilip          #+#    #+#             */
/*   Updated: 2024/08/19 15:18:12 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

// int	main(void)
// {
// 	char	src[] = "bonjour bande de nazes";
// 	char	dest[] = "adios";

// 	printf("%s -Src\n", src);
// 	printf("%s -Dest\n", dest);
// 	ft_strcpy(dest, src);
// 	printf("%s -Dest\n", dest);
// 	return (0);
// }
