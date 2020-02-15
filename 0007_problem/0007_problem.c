/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0007_problem.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 00:24:04 by kmira             #+#    #+#             */
/*   Updated: 2020/02/15 01:06:52 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main(int aa, char **args)
{
	int	i;
	int	j;
	int	attempt;
	int	size;
	int	attempt_prime;
	int	*prime_arr;

	if (aa == 2)
	{
		i = 0;
		size = atoi(args[1]);
		prime_arr = malloc(sizeof(*prime_arr) * (size));
		attempt = 2;
		while (i < size)
		{
			j = 0;
			attempt_prime = 1;
			while (j < i)
			{
				if (attempt % prime_arr[j] == 0)
				{
					attempt_prime = 0;
					break ;
				}
				j++;
			}
			if (attempt_prime == 1)
			{
				prime_arr[i] = attempt;
				// printf("PRIME %d is: %d\n", i, prime_arr[i]);
				attempt = prime_arr[i] + 1;
				i++;
			}
			else
				attempt++;
		}
		printf("Answer: %d\n", prime_arr[size - 1]);
	}
	else
		printf("ENOMSG\n");
}
