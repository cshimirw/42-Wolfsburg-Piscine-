/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshimirw <cshimirw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 14:25:12 by cshimirw          #+#    #+#             */
/*   Updated: 2025/09/11 10:06:17 by cshimirw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void)
{
    char i;
    i = 'a';
    while (i <= 'z')
    {
        write(1, &i, 1);
        i++;
    }
}
/*int main () {
    ft_print_alphabet ();
}*/
