/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshimirw <cshimirw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 09:31:29 by cshimirw          #+#    #+#             */
/*   Updated: 2025/09/18 10:29:41 by cshimirw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	w;

	i = 0;
	w = 1;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (w && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
			w = 0;
		else
			w = 1;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char s[] = "HELLO, have you ever played astroneer? no? how? and why?";
// 	printf("%s\n", ft_strcapitalize(s));
// 	return (0);
// }