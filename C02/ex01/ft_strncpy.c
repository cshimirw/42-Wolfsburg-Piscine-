/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshimirw <cshimirw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 09:30:55 by cshimirw          #+#    #+#             */
/*   Updated: 2025/09/18 10:29:19 by cshimirw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
// int	main(void)
// {
// 	char	src[] = "Moin!";
// 	char	dest[10];

// 	printf("dest = %s\n", dest);
// 	printf("src = %s\n\n", src);

// 	ft_strncpy(dest, src, 5);

// 	printf("dest = %s\n", dest);
// 	printf("src = %s\n", src);

// 	return (0);
// }