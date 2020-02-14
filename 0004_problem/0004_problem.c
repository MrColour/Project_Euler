/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0004_problem.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 12:52:32 by kmira             #+#    #+#             */
/*   Updated: 2020/02/14 02:42:26 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		is_num_palindrome(int check)
{
	int	num;
	int	reverse_check;

	num = check;
	reverse_check = 0;
	while (num > 0)
	{
		reverse_check = (reverse_check * 10) + (num % 10);
		num = num / 10;
	}
	if (check == reverse_check)
		return (1);
	else
		return (0);
}

int	main(void)
{
	int		is_palindrome;
	int		multiplier;
	int		top_num;
	int		bottom_num;
	int		highest_num;

	top_num = 500;
	bottom_num = 10;

	highest_num = 0;
	while (top_num >= bottom_num)
	{
		multiplier = top_num;
		while (multiplier > bottom_num)
		{
			is_palindrome = is_num_palindrome(top_num * multiplier);
			if (is_palindrome == 1)
			{
				// printf("New: %d, at %d and %d\n", multiplier * top_num, multiplier, top_num);
				if (highest_num < multiplier * top_num)
					highest_num = multiplier * top_num;
				bottom_num = multiplier + 1;
			}
			multiplier--;
		}
		top_num--;
	}
	printf("Answer: %d\n", highest_num);
	return (0);
}
