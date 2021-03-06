# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xinu <xinu@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/08 10:45:56 by xinu              #+#    #+#              #
#    Updated: 2021/05/06 16:03:59 by xinu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

fclean:
	make fclean -C 0001_problem
	make fclean -C 0002_problem
	make fclean -C 0003_problem
	make fclean -C 0004_problem
	make fclean -C 0005_problem
	make fclean -C 0006_problem
	make fclean -C 0007_problem
	make fclean -C 0008_problem
	make fclean -C 0009_problem
	make fclean -C 0010_problem

save: fclean
	git add .
	git commit -m "msg: $(MSG)"
	git push

new:
	mkdir $(P_NUM)_problem
	touch $(P_NUM)_problem/Makefile
	touch $(P_NUM)_problem/$(P_NUM)_problem.c
