/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0005_problem.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 03:02:47 by kmira             #+#    #+#             */
/*   Updated: 2020/02/14 13:38:56 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#define NON_FACTOR 0

int		fetch_out_factor(int *num)
{
	int	product;
	int	attempt;

	product = *num;
	if (product <= 1)
		return (NON_FACTOR);
	attempt = 2;
	while (attempt < product && product % attempt != 0)
		attempt++;
	*num = product / attempt;
	return (attempt);
}

int		main(int aa, char **args)
{
	int	stop;
	int	product;
	int	product_copy;
	int	factor;
	int	evenly_divide;

	if (aa == 2)
	{
		product = 1;
		stop = atoi(args[1]);
		while (stop > 1)
		{
			if (product % stop != 0)
			{
				evenly_divide = stop;
				product_copy = product;
				factor = fetch_out_factor(&evenly_divide);
				while (factor != NON_FACTOR)
				{
					if (product_copy % factor == 0)
						product_copy /= factor;
					else
						product *= factor;
					factor = fetch_out_factor(&evenly_divide);
				}
			}
			stop--;
		}
		printf("Answer: %d\n", product);
	}
	else
		printf("ENOMSG\n");
	return (0);
}

