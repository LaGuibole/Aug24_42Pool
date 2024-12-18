/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 11:41:43 by guphilip          #+#    #+#             */
/*   Updated: 2024/08/19 15:18:10 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	s1[] = "Hello World";
// 	char	s2[] = "W";
// 	unsigned int n = 1;

// 	printf("%s -Src\n", s1);
// 	printf("%s -Dest\n", s2);
// 	ft_strncpy(s2, s1, n);
// 	printf("%s -Dest\n", s2);
// 	return (0);
// }
