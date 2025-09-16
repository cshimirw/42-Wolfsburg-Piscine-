/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshimirw <cshimirw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 15:54:53 by cshimirw          #+#    #+#             */
/*   Updated: 2025/09/16 16:52:55 by cshimirw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	left;
	int	right;
	int	x;

	left = 0;
	right = size - 1;
	while (left < right)
	{
		x = tab[left];
		tab[left] = tab[right];
		tab[right] = x;
		left++;
		right--;
	}
}

// int main(void)
// {
// 	int	tab[5] = {1, 2, 3, 4, 5};
// 	int	i;

// 	ft_rev_int_tab(tab, 5);
// 	i = 0;
// 	while (i < 5)
// 	{
// 		printf("%d ", tab[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }