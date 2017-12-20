# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mferreir <mferreir@student.42.>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/12 12:19:40 by mferreir          #+#    #+#              #
#    Updated: 2017/12/12 15:06:44 by mferreir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# explicit rule
# implicit rule
# variable definitions
# directives
# comments

# form = target : dependencies
# 			system command(s)

# 	   = explicit : implict
# 			variable&directives

SRC=*.cpp
OBJ=*.o
CC=g++
CFLAGS= -Wall -Werror -Wextra

compo : *.o
	$(CC) -o $(CFLAGS) $(OBJ) -I.

