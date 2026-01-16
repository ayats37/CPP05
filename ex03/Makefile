# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: taya <taya@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/15 11:56:44 by taya              #+#    #+#              #
#    Updated: 2026/01/16 14:55:11 by taya             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out
SRC = Bureaucrat.cpp  main.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp
OBJ = $(SRC:.cpp=.o)
CPPC = c++
CPPFLAG = -Wall -Wextra -Werror -std=c++98


all: $(NAME)


$(NAME): $(OBJ)
	$(CPPC) $(CPPFLAG) -o $(NAME) $(OBJ)

%.o: %.cpp Bureaucrat.hpp  AForm.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp Intern.hpp
	$(CPPC) $(CPPFLAG) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re