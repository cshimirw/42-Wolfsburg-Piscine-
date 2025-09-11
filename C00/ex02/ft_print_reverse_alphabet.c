/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshimirw <cshimirw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 15:08:30 by cshimirw          #+#    #+#             */
/*   Updated: 2025/09/11 10:10:00 by cshimirw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_print_reverse_alphabet(void)
{
    char i; 
    i = 'z';
    while (i >= 'a')
    {
        write(1, &i, 1);
        i--;
    }
}
/*int main(void)
{
    ft_print_reverse_alphabet();
}
*/