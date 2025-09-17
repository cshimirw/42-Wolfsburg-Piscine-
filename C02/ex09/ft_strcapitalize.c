/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshimirw <cshimirw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 09:31:29 by cshimirw          #+#    #+#             */
/*   Updated: 2025/09/17 17:29:45 by cshimirw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	w;

	i = 0;
	w = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
		{
			if (w && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			w = 0;
		}
		else
		{
			w = 1;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char s[] = "hello have you ever played astroneer? no? howwwwwwwww? and whyyyyyyy?";
	printf("%s\n", ft_strcapitalize(s));
	return (0);
}