/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0010_problem.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinu <xinu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 16:04:25 by xinu              #+#    #+#             */
/*   Updated: 2021/05/06 16:58:52 by xinu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CUTOFF 2000000

int	main(void)
{
	char	primes[CUTOFF] = { 0 };
	unsigned int	i = 0;
	unsigned int	at = 0;
	unsigned long long	sum = 2;

	memset(primes, 0, sizeof(primes));

	i = 3;
	while (i < CUTOFF)
	{
		if (primes[i] == 0)
		{
			sum += i;
			at = i + i;
			while (at < CUTOFF)
			{
				primes[at] = 1;
				at += i;
			}
		}
		i += 2;
	}
	printf("Answer: %lld\n", sum);
}
