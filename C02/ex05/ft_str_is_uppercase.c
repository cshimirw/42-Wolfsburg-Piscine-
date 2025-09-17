/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshimirw <cshimirw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 09:31:15 by cshimirw          #+#    #+#             */
/*   Updated: 2025/09/17 15:47:50 by cshimirw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
// int	main(void)
// {
// 	printf("Empty: %d\n", ft_str_is_uppercase(""));
// 	printf("%d\n", ft_str_is_uppercase("leGO"));
// 	printf("%d\n", ft_str_is_uppercase("LEGO"));
// 	return (0);
// }