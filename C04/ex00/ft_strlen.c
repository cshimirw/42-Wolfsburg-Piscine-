/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshimirw <cshimirw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 17:01:35 by cshimirw          #+#    #+#             */
/*   Updated: 2025/09/24 13:10:35 by cshimirw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

// int	main(void)
// {
// 	char	*msg;

// 	msg = "Landing on Sylva!";
// 	printf("Astroneer length: %d\n", ft_strlen(msg));
// 	return (0);
// }