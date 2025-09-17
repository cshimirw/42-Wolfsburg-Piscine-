/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshimirw <cshimirw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 09:31:12 by cshimirw          #+#    #+#             */
/*   Updated: 2025/09/17 15:46:24 by cshimirw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
// int	main(void)
// {
// 	printf("Empty: %d\n", ft_str_is_lowercase(""));
// 	printf("%d\n", ft_str_is_lowercase("lego"));
// 	printf("%d\n", ft_str_is_lowercase("Lego"));
// 	return (0);
// }