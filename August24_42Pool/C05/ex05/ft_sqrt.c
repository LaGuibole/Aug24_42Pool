/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 13:40:22 by guphilip          #+#    #+#             */
/*   Updated: 2024/08/26 18:27:05 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	racine;

	racine = 0;
	if (nb < 0)
		return (0);
	while (racine * racine < nb)
		racine++;
	if (racine * racine == nb)
		return (racine);
	return (0);
}

// int	main(void)
// {
// 	printf("%d\n", ft_sqrt(16));
// }
