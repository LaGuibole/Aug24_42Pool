/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:13:55 by guphilip          #+#    #+#             */
/*   Updated: 2024/08/28 15:09:36 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	size;
	int	i;

	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = malloc(size * sizeof(int));
	if (!tab)
		return (-1);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (size);
}

// int	main(int argc, char *argv[])
// {
// 	int	*arr;
// 	int	**p2arr = &arr;
// 	int	size;
// 	int	i;
// 	(void)argc;
// 	i = 0;
// 	size = ft_ultimate_range(p2arr, atoi(argv[1]), atoi(argv[2]));
// 	printf("=== RESULT %d ===\n", size);
// 	while (i < size)
// 	{
// 		printf("=== TAB DE %d : %d\n", i + 1, arr[i]);
// 		i++;
// 	}
// 	return (0);
// }
