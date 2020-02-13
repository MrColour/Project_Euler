/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0003_problem.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 09:30:43 by kmira             #+#    #+#             */
/*   Updated: 2020/02/13 09:48:50 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	main(int aa, char **args)
{
	long long	stop;
	long long	attempt;
	long long	last_prime;

	if (aa == 2)
	{
		attempt = 2;
		last_prime = 1;
		stop = atoll(args[1]);
		while (attempt <= stop)
		{
			if (stop % attempt == 0)
			{
				stop = stop / attempt;
				if (last_prime != attempt)
				{
					last_prime = attempt;
					// printf("Factor: %lld\n", attempt);
				}
				last_prime = attempt;
				attempt--;
			}
			attempt++;
		}
		printf("Answer: %lld\n", last_prime);
	}
	else
		printf("ENOMSG\n");
	return (0);
}
