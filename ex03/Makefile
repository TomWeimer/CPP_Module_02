NAME		:=		 Fixed


CPP			:=		g++-11

CPPFLAGS	:=		-Wall -Wextra -Werror -std=c++98

SRC			:=		main.cpp\
					Fixed.cpp\

OBJ			:= 		$(SRC:.cpp=.o)


all:		$(NAME)

$(NAME):	$(OBJ)
					@ $(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)
					@ echo "\033[33m$(NAME) has been compiled !\033[0m"
%.o:	%.cpp
				@ $(CPP) $(CPPFLAGS) -c $< -o $@
clean:
					$(RM) $(OBJ)
fclean:	clean
					$(RM) $(NAME)

re:		fclean all

.PHONY:	clean fclean re
	
