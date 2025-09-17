/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshimirw <cshimirw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 09:31:19 by cshimirw          #+#    #+#             */
/*   Updated: 2025/09/17 15:55:53 by cshimirw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= ' ' && str[i] <= '~'))
			return (0);
		i++;
	}
	return (1);
}
// int	main(void)
// {
// 	printf("Empty: %d\n", ft_str_is_printable(""));
// 	printf("%d\n", ft_str_is_printable("Rwanda is beautiful"));
// 	printf("%d\n", ft_str_is_printable("Gla\re"));
// 	return (0);
// }