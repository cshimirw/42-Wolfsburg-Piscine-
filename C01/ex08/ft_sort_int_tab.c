/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshimirw <cshimirw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 16:53:32 by cshimirw          #+#    #+#             */
/*   Updated: 2025/09/16 17:21:15 by cshimirw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	c;
	int	h;
	int	x;

	c = 0;
	while (c < size -1)
	{
		h = 0;
		while (h < size -1 - c)
		{
			if (tab[h] > tab [h + 1])
			{
				x = tab[h];
				tab[h] = tab [h +1];
				tab[h + 1] = x;
			}
			h++;
		}
		c++;
	}
}

// int	main(void)
// {
// 	int	tab[6] = {5, 2, 9, 1, 5, 9};
// 	int	k;
// 	int	size;

// 	size = 6;
// 	ft_sort_int_tab(tab, size);
// 	k = 0;
// 	while (k < size)
// 	{
// 		printf("%d ", tab[k]);
// 		k++;
// 	}
// 	printf("\n");
// 	return (0);
// }