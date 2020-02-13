/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0002_problem.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 12:27:44 by xinu              #+#    #+#             */
/*   Updated: 2020/02/13 12:49:29 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	long long	sum;
	long long	f1;
	long long	f2;
	long long	temp;

	f1 = 1;
	f2 = 2;
	sum = f2;
	while (f1 < 4000000 && f2 < 4000000)
	{
		temp = f2 + f1;
		printf("TEMP: %lld\n", temp);
		if (temp % 2 == 0)
			sum += temp;
		f1 = f2;
		f2 = temp;
	}
	printf("Answer: %lld\n", sum);
	return (0);
}
