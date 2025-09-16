/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshimirw <cshimirw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 13:02:11 by cshimirw          #+#    #+#             */
/*   Updated: 2025/09/16 15:06:48 by cshimirw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// int main(void)
// {
//     int a = 20;
//     int b = 4;

//     printf("Before: a = %d b = %d\n", a, b); 
//     ft_ultimate_div_mod(&a, &b);
//     printf("After: a = %d b = %d\n", a, b);
// }