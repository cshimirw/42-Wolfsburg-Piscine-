/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshimirw <cshimirw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 11:16:40 by cshimirw          #+#    #+#             */
/*   Updated: 2025/09/16 14:56:14 by cshimirw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_swap(int	*a,	int	*b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}
// int main(void) {
// 	int	a = 2;
// 	int	b = 4;

// 	printf("Before: a =%d, b = %d\n", a, b);
// 	ft_swap(&a, &b);
// 	printf("After: a = %d, b = %d\n", a, b);
// }