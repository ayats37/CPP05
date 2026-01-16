# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: taya <taya@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/15 11:56:44 by taya              #+#    #+#              #
#    Updated: 2026/01/15 11:57:19 by taya             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out
SRC = Bureaucrat.cpp  main.cpp
OBJ = $(SRC:.cpp=.o)
CPPC = c++
CPPFLAG = -Wall -Wextra -Werror -std=c++98


all: $(NAME)


$(NAME): $(OBJ)
	$(CPPC) $(CPPFLAG) -o $(NAME) $(OBJ)

%.o: %.cpp Bureaucrat.hpp 
	$(CPPC) $(CPPFLAG) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re