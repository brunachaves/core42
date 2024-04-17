/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brchaves <brchaves@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:45:38 by brchaves          #+#    #+#             */
/*   Updated: 2024/04/17 15:45:42 by brchaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	interval;
	int	i;

	if (min >= max)
		return (NULL);
	interval = max - min;
	i = 0;
	result = (int *)malloc(sizeof(int) * interval);
	while (interval)
	{
		result[i] = min;
		min++;
		i++;
		interval--;
	}
	return (result);
}
