/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brchaves <brchaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:35:23 by brchaves          #+#    #+#             */
/*   Updated: 2024/04/17 15:30:02 by brchaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	start;
	int	end;
	int	aux;

	start = 0;
	end = 92680;
	aux = (start + end) / 2;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	while (start <= end)
	{
		if ((aux * aux) == nb)
			return (aux);
		else
		{
			if ((aux * aux) < nb)
				start = aux + 1;
			else
				end = aux - 1;
			aux = (start + end) / 2;
		}
	}
	return (0);
}

/* int main(void)
{
    int num = 2147395600;
    int sqrt_nb = ft_sqrt(num);

    printf("this is sqrt: %d\n", sqrt_nb);
    return (0);
} */
