/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshimirw <cshimirw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 11:52:39 by cshimirw          #+#    #+#             */
/*   Updated: 2025/09/16 13:01:19 by cshimirw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main(void)
// {
// 	int a;
// 	int b;
// 	int div;
// 	int mod;

// 	a = 10; 
// 	b = 5;
// 	ft_div_mod(a, b, &div, &mod);
// 	printf("%d, %d\n", div, mod);
// }