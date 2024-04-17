/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brchaves <brchaves@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:04:38 by brchaves          #+#    #+#             */
/*   Updated: 2024/04/16 11:10:48 by brchaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	char	negative;
	char	non_negative;

	negative = 'N';
	non_negative = 'P';
	if (n < 0)
		ft_putchar(negative);
	else
		ft_putchar(non_negative);
}
