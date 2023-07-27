# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sheferna <sheferna@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/23 17:31:07 by sheferna          #+#    #+#              #
#    Updated: 2023/07/23 17:36:02 by sheferna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = myprog
OBJS = main.o

CFLAGS = -Wall -Wextra -Werror 

$(TARGET) : $(OBJS)
	gcc $(FLAGS) $(OBJS) -o $(TARGET)

%.o : %.c
	gcc -c -MD $(CFLAGS) $< -o $@

.PHONY : clean
clean :
	@rm -f *.o 
