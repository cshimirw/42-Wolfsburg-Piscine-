/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshimirw <cshimirw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 14:15:31 by cshimirw          #+#    #+#             */
/*   Updated: 2025/09/23 14:21:49 by cshimirw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0' && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	text[] = "this is a simple test";

// 	printf("%s\n", ft_strstr(text, "simple")); // "simple test"
// 	printf("%s\n", ft_strstr(text, "is"));     // "is is a simple test"
// 	printf("%s\n", ft_strstr(text, "xyz"));    // (null)
// 	printf("%s\n", ft_strstr(text, ""));       // whole string
// 	return (0);
// }