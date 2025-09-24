/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshimirw <cshimirw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 14:15:18 by cshimirw          #+#    #+#             */
/*   Updated: 2025/09/23 15:13:22 by cshimirw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '0'))
	{
		if (s1[i] < s2 [i])
			return (s1[i] - s2[i]);
		else if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else
			i++;
	}
	return (s1[i] - s2[i]);
}

// int main(void)
// {
//     printf("%d\n", ft_strcmp("hello", "hello"));
//     printf("%d\n", ft_strcmp("abc", "abd"));
//     printf("%d\n", ft_strcmp("abd", "abc"));
//     printf("%d\n", ft_strcmp("", ""));
//     return 0;
// }