/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshimirw <cshimirw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 17:02:35 by cshimirw          #+#    #+#             */
/*   Updated: 2025/09/24 12:52:03 by cshimirw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (i > 1);
}

void	print_nbr(long nbr, char *base, int b_len)
{
	if (nbr >= b_len)
		print_nbr(nbr / b_len, base, b_len);
	ft_putchar(base[nbr % b_len]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	n;

	n = nbr;
	if (!check_base(base))
		return ;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	print_nbr(n, base, 0);
}

// int	main(void)
// {
// 	int rover_id;

// 	rover_id = 42;
// 	ft_putnbr_base(rover_id, "0123456789ABCDEF");
// 	write(1, "\n", 1);
// 	return (0);
// }