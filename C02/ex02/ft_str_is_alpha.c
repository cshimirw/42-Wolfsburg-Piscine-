/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshimirw <cshimirw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 09:31:01 by cshimirw          #+#    #+#             */
/*   Updated: 2025/09/17 14:31:04 by cshimirw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}
// int	main(void)
// {
// 	printf("Empty: %d\n", ft_str_is_alpha(""));
// 	printf("%d\n", ft_str_is_alpha("Avatar"));
// 	printf("%d\n", ft_str_is_alpha("Avatar2"));
// 	return (0);
// }