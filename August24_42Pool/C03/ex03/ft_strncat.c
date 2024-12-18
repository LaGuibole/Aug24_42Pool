/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 19:18:09 by guphilip          #+#    #+#             */
/*   Updated: 2024/08/21 18:45:46 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				dest_size;

	i = 0;
	dest_size = 0;
	while (dest[i] != '\0')
	{
		dest_size++;
		i++;
	}
	i = 0;
	while (src[i] && i < nb)
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	dest[] = "bonjour";
// 	char	str[] = "coucou";

// 	printf("%s\n", ft_strncat(dest, str, 2));
// }
