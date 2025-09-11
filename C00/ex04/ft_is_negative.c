/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshimirw <cshimirw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 15:39:50 by cshimirw          #+#    #+#             */
/*   Updated: 2025/09/10 16:27:55 by cshimirw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n)
{
    if (n >= 0)
    {
        write(1, "P", 1);
    }
    else 
    {
        write(1, "N", 1);
    }
}
/*int main(void)
{
    ft_is_negative(17);
    printf("\n");
    ft_is_negative(0);
    printf("\n");
    ft_is_negative(-17);
    printf("\n");
}*/