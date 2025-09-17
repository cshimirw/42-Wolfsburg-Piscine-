/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshimirw <cshimirw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 09:31:08 by cshimirw          #+#    #+#             */
/*   Updated: 2025/09/17 14:50:03 by cshimirw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
// int	main(void)
// {
// 	printf("Empty: %d\n", ft_str_is_numeric(""));
// 	printf("%d\n", ft_str_is_numeric("170400"));
// 	printf("%d\n", ft_str_is_numeric("17Av0400"));
// 	return (0);
// }