/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshimirw <cshimirw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 14:15:33 by cshimirw          #+#    #+#             */
/*   Updated: 2025/09/23 16:19:55 by cshimirw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d;
	unsigned int	s;
	unsigned int	i;

	d = 0;
	s = 0;
	while (d < size && dest[d])
		d++;
	while (src[s])
		s++;
	if (d == size)
		return (size + s);
	i = 0;
	while (src[i] && (d + i + 1) < size)
	{
		dest[d + i] = src[i];
		i++;
	}
	dest[d + i] = '\0';
	return (d + s);
}
// int main() {
//     char dest[22] = "Hello, ";
//     char src[] = "from Astroneer!";
//     unsigned int size = 22;

//     unsigned int result = ft_strlcat(dest, src, size);
//     printf("Resulting String: %s\n", dest);
//     printf("Total Length: %u\n", result);

//     return (0);
// }